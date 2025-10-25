#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>        // for read(), write(), close()
#include <arpa/inet.h>     // for inet_addr()
#include <sys/socket.h>

#define PORT 8080
#define MAX 1024

int main() {
    int server_fd, client_fd;
    struct sockaddr_in servaddr, cli;
    char buffer[MAX];
    int opt = 1;

    // 1. Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) {
        perror("Socket creation failed");
        exit(1);
    }
    printf("Socket created successfully\n");

    // 2. Reuse address and port
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    // 3. Bind socket to IP/Port
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY; // any local IP
    servaddr.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Bind failed");
        exit(1);
    }
    printf("Socket binded successfully\n");

    // 4. Listen for clients
    if (listen(server_fd, 5) != 0) {
        perror("Listen failed");
        exit(1);
    }
    printf("Server listening...\n");

    // 5. Accept client connection
    socklen_t len = sizeof(cli);
    client_fd = accept(server_fd, (struct sockaddr*)&cli, &len);
    if (client_fd < 0) {
        perror("Server accept failed");
        exit(1);
    }
    printf("Client connected\n");

    // 6. Communicate with client
    memset(buffer, 0, sizeof(buffer));
    read(client_fd, buffer, sizeof(buffer));   // read message from client
    printf("From Client: %s\n", buffer);

    // send reply
    char msg[] = "Hello Client\n";
    write(client_fd, msg, strlen(msg) + 1); // send with null terminator

    // 7. Close sockets
    close(client_fd);
    close(server_fd);

    return 0;
}

