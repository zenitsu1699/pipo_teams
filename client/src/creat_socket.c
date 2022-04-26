/*
** EPITECH PROJECT, 2021
** creat_socket.c
** File description:
** creat_socket.c
*/

#include "../include/include.h"

int creating_a_socket(void)
{
    int fd_socket = 0;
    struct protoent *my_protocol = getprotobyname("tcp");
    int papa = my_protocol->p_proto;

    fd_socket = socket(PF_INET, SOCK_STREAM, papa);
    if (fd_socket == -1) handle_error("socket");
    return fd_socket;
}
