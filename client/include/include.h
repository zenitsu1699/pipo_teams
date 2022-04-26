/*
** EPITECH PROJECT, 2021
** include.h
** File description:
** include
*/

#ifndef __CLIENT_H__
#define __CLIENT_H__

#include "../../libs/myteams/logging_client.h"
#include "../../libs/myteams/logging_server.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <malloc.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <stdarg.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stddef.h>

#define handle_error(msg)   \
    do                      \
    {                       \
        perror(msg);        \
        exit(EXIT_FAILURE); \
    } while (0)

char *clone_string(char *s);
int check_port(char *str);
int check_address(char *str);
char *_init_second_param(void);
char **my_str_to_word_tab(char *input, char *c);
void usage(void);
int connected_server(int fd_socket, char *ip_adress, int port);
int creating_a_socket(void);
int client(char *ip_address, int port);

#endif