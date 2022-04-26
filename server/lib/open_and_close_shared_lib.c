/*
** EPITECH PROJECT, 2021
** open_shared_lib.c
** File description:
** open_shared_lib
*/

#include "../include/include.h"

void open_shared_lib(void **handle)
{
    char *get_pwd = NULL;
    char *pwd_lib_shared = NULL;

    get_pwd = getcwd(get_pwd, 100001);
    get_pwd = str_remove(get_pwd, "/server");
    pwd_lib_shared = strcat(get_pwd, PATH);
    *handle = dlopen(pwd_lib_shared, RTLD_LAZY);
    if (!*handle) handle_error("dlopen");
}

void close_shared_lib(void **handle)
{
    dlclose(*handle);
    *handle = NULL;
}