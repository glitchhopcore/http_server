#include "handler.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void handle_request(int client_socket)
{
    char buffer[1024];
    int bytes_read;

    bytes_read = read(client_socket, buffer, sizeof(buffer) - 1);
    if (bytes_read < 0) {
        perror("Failed to read from client socket");
        return;
    }

    buffer[bytes_read] = '\0';
    printf("Received request:\n%s\n", buffer);

    const char *response = 
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/plain\r\n"
        "Content-Length: 13\r\n\r\n"
        "Hello, World!";

    write(client_socket, response, strlen(response));
    close(client_socket);
}