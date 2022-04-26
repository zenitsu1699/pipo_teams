/*
** EPITECH PROJECT, 2021
** lib.h
** File description:
** the lib ....
*/

#ifndef LIB_H
#define LIB_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/un.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/time.h>

#include <dlfcn.h>
#include <gnu/lib-names.h>
#include <dirent.h>
#include <string.h>

#include <uuid/uuid.h>

#include "../../libs/myteams/logging_client.h"
#include "../../libs/myteams/logging_server.h"

#define TRUE   1
#define FALSE  0
#define PORT 8888
#define MAX_CLIENTS 45

#define PATH "/libs/myteams/libmyteams.so"

#define BACKLOG 25

#define MAX_NAME_LENGTH 32

#define MAX_DESCRIPTION_LENGTH 255

#define MAX_BODY_LENGTH 512

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

#define ERR_LOGIN "[400 Error] : Error on login.\n"
#define ERR_LOGIN_EXIT "[401 Error] : User already exit.\n"
#define ERR_LOGIN_SIZE "[402 Error] : User name too long.\n"
#define ERR_COMMAND "[410 Error] : Bad command  : Please tape '/help'.\n"
#define ERR_LOGOUT "[411 Error] : It's not a User.\n"

typedef struct info_server
{
    char *uuid_user;
    char *name_user;
} info_server;

typedef struct info_of_client
{
    char *user_name;
    char *user_uuid;
}the_info, *infos;

typedef struct the_data_client
{
    int client_socket;
    char *client_ip;
    int client_port;
  the_info *client_info;
} the_data, *data_client;

typedef struct the_commands
{
    char *cmd;
    char *(*my_function)(char *input);
} the_commands;

typedef struct exec_command
{
    char *cmd;
    void (*my_function)(int sd, the_data *c_user, char *input,
            		struct sockaddr_in address, int index);
} exec_command;

#endif
