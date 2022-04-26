/*
** EPITECH PROJECT, 2021
** str_remove.c
** File description:
** str_remove
*/

#include "../include/include.h"

char *str_remove(char *string, char *substring)
{
    char *cc = strstr(string, substring);

    if (cc == NULL) return NULL;
    string[strlen(string) - strlen(substring)] = '\0';
    return string;
}