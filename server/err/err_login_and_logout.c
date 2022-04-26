/*
** EPITECH PROJECT, 2021
** err_login_and_logout.c
** File description:
** err_login_and_logout
*/

#include "../include/include.h"

char *err_login(char *input)
{
    char *copy = clone_string(input);
    char **mystr = my_str_to_word_tab(copy, " ");
    char *cc = NULL;

    if (mystr[1] == NULL) return input;
    else {
        if (mystr[1][0] != '"') return NULL;
        copy = clone_string(input);
        cc = init_second_param();
        mystr = my_str_to_word_tab(copy, cc);
        if (mystr[1] == NULL) return NULL;
        else if (mystr[2] == NULL) return input;
        else return NULL; }
    return NULL;
}

char *err_logout(char *input)
{
    char *copy = clone_string(input);
    char **mystr = my_str_to_word_tab(copy, " ");

    if (mystr[1] == NULL) return input;
    else return NULL;
}
