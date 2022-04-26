/*
** EPITECH PROJECT, 2021
** lib.h
** File description:
** lib
*/

#ifndef LIB_H
#define LIB_H

#include "../../libs/myteams/logging_client.h"
#include "../../libs/myteams/logging_server.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/un.h>
#include <netinet/in.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/time.h>

#include <dlfcn.h>
#include <gnu/lib-names.h>
#include <dirent.h>
#include <string.h>

#include <uuid/uuid.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

#define TRUE   1
#define FALSE  0

#define PATH "/libs/myteams/libmyteams.so"

#endif
