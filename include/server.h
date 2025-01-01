#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <netinet/in.h>

#define PORT 8080
#define BACKLOG 10 /* Number of pending connections in the queue */ 

int initialize_server(struct sockaddr_in *address);
int accept_connection(int server_fd);

#endif /* SERVER_H */
