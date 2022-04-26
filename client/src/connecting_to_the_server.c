/*
** EPITECH PROJECT, 2021
** connection_to_the_server.c
** File description:
** connecting_to_the_server
*/

#include "../include/include.h"

int connected_server(int fd_socket, char *ip_adress, int port)
{
    struct sockaddr_in myaddr;

    memset(&myaddr, 0, sizeof(struct sockaddr_in));
    myaddr.sin_family = PF_INET;
    myaddr.sin_port = htons(port);
    myaddr.sin_addr.s_addr = INADDR_ANY;
    if (connect(fd_socket, (struct sockaddr *) &myaddr,
            sizeof(struct sockaddr_in)) == -1)
        handle_error("connect");
    return 0;
}
