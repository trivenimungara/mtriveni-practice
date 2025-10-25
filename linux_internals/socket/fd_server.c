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

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) { perror("Socket"); exit(1); }

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Bind"); exit(1);
    }

    if (listen(sockfd, 5) != 0) {
        perror("Listen"); exit(1);
    }

    printf("Server listening on port %d...\n", PORT);

    socklen_t len = sizeof(cli);
    connfd = accept(sockfd, (struct sockaddr*)&cli, &len);
    if (connfd < 0) { perror("Accept"); exit(1); }

    printf("Client connected!\n");

    fp = fopen("received_file", "wb");
    if (!fp) { perror("File"); exit(1); }

    ssize_t n;
    while ((n = read(connfd, buffer, BUFFER_SIZE)) > 0) {
        fwrite(buffer, 1, n, fp);
    }

    printf("File received and saved as 'received_file'\n");

    fclose(fp);
    close(connfd);
    close(sockfd);
    return 0;
}
