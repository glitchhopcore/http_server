#include "server.h"

int main(void)
{
    int port = 8080;

    if (start_server(port) != 0) {
        fprintf(stderr, "Failed to start server on port %d\n", port);
        return 1;
    }

    return 0;
}