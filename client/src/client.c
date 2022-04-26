/*
** EPITECH PROJECT, 2021
** client.c
** File description:
** client
*/

#include "../include/include.h"

int client(char *ip_address, int port)
{
    int fd_client = 0;

    fd_client = creating_a_socket();
    connected_server(fd_client, ip_address, port);
    while (true) {}
    return 0;
}