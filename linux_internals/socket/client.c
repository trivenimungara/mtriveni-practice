#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>        // for read(), write(), close()
#include <arpa/inet.h>     // for inet_addr()
#include <sys/socket.h>

#define PORT 8080
#define MAX 1024

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    char buffer[MAX];

    // 1. Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket creation failed");
        exit(1);
    }
    printf("Socket created successfully\n");

    // 2. Server address setup
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // localhost

    // 3. Connect to server
    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Connection with server failed");
        exit(1);
    }
    printf("Connected to server\n");

    // 4. Send and receive data
    printf("Enter a message: ");
    fgets(buffer, MAX, stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // remove trailing newline

    write(sockfd, buffer, strlen(buffer) + 1); // send message to server

    memset(buffer, 0, sizeof(buffer));
    read(sockfd, buffer, sizeof(buffer));  // read server response
    printf("From Server: %s\n", buffer);

    // 5. Close socket
    close(sockfd);
    return 0;
}


