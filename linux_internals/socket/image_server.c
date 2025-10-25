#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sockfd, connfd;
    struct sockaddr_in servaddr, cli;
    char buffer[BUFFER_SIZE];
    FILE *fp;
    char filename[256];

    // 1️⃣ Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket");
        exit(1);
    }

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    // 2️⃣ Bind socket
    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Bind");
        exit(1);
    }

    // 3️⃣ Listen for connections
    if (listen(sockfd, 5) != 0) {
        perror("Listen");
        exit(1);
    }

    printf("Server listening on port %d...\n", PORT);

    socklen_t len = sizeof(cli);
    connfd = accept(sockfd, (struct sockaddr*)&cli, &len);
    if (connfd < 0) {
        perror("Accept");
        exit(1);
    }

    printf("Client connected!\n");

    // 4️⃣ Receive filename first
    bzero(filename, sizeof(filename));
    if (read(connfd, filename, sizeof(filename)) <= 0) {
        perror("Filename read");
        close(connfd);
        close(sockfd);
        exit(1);
    }
    printf("Receiving file: %s\n", filename);

    // 5️⃣ Open file to write
    fp = fopen(filename, "wb");
    if (!fp) {
        perror("File");
        close(connfd);
        close(sockfd);
        exit(1);
    }

    // 6️⃣ Receive file data
    ssize_t n;
    while ((n = read(connfd, buffer, BUFFER_SIZE)) > 0) {
        fwrite(buffer, 1, n, fp);
    }

    printf("✅ File '%s' received successfully!\n", filename);

    fclose(fp);
    close(connfd);
    close(sockfd);
    return 0;
}
