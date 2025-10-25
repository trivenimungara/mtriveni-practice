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
    char filename[100];

    printf("Enter file name to send: ");
    scanf("%s", filename);

    fp = fopen(filename, "rb");
    if (!fp) { perror("File"); exit(1); }

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) { perror("Socket"); exit(1); }

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr("192.168.68.151");  // 🔹 Replace with your server's IP

    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Connect"); exit(1);
    }

    printf("Connected to server, sending file...\n");

    ssize_t n;
    while ((n = fread(buffer, 1, BUFFER_SIZE, fp)) > 0) {
        write(sockfd, buffer, n);
    }

    printf("File sent successfully!\n");

    fclose(fp);
    close(sockfd);
    return 0;
}

