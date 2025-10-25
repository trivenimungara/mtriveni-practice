#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    char buffer[BUFFER_SIZE];
    FILE *fp;
    char filepath[256];
    char *filename;

    printf("Enter full file path to send: ");
    fgets(filepath, sizeof(filepath), stdin);       // ✅ fixed
    filepath[strcspn(filepath, "\n")] = 0;         // remove trailing newline

    // Extract file name from path
    filename = strrchr(filepath, '/');
    if (filename)
        filename++; // skip '/'
    else
        filename = filepath;

    fp = fopen(filepath, "rb");
    if (!fp) {
        perror("File");
        exit(1);
    }

    // 1️⃣ Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket");
        exit(1);
    }

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);

    // 🔹 Replace with your server's IP
    servaddr.sin_addr.s_addr = inet_addr("192.168.68.142");

    // 2️⃣ Connect to server
    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Connect");
        exit(1);
    }

    printf("Connected to server.\nSending file: %s\n", filename);

    // 3️⃣ Send filename first
    write(sockfd, filename, strlen(filename) + 1);

    // 4️⃣ Send file data
    ssize_t n;
    while ((n = fread(buffer, 1, BUFFER_SIZE, fp)) > 0) {
        write(sockfd, buffer, n);
    }

    printf("✅ File '%s' sent successfully!\n", filename);

    fclose(fp);
    close(sockfd);
    return 0;
}

