/*
** EPITECH PROJECT, 2021
** err_subscribe_unsubscribe.c
** File description:
** err_subscribe_and_unsubscribe
*/

#include "../include/include.h"

char *err_subscribe(char *input)
{
    char *copy = clone_string(input);
    char *cc = init_second_param();
    char **mystr = my_str_to_word_tab(copy, " ");

    if (mystr[1][0] != '"') return NULL;
    copy = clone_string(input);
    mystr = my_str_to_word_tab(copy, cc);
    if (mystr[2] == NULL) return input;
    else return NULL;
    return NULL;
}

char *err_unsubscribe(char *input)
{
    char *copy = clone_string(input);
    char *cc = init_second_param();
    char **mystr = my_str_to_word_tab(copy, " ");

    if (mystr[1][0] != '"') return NULL;
    copy = clone_string(input);
    mystr = my_str_to_word_tab(copy, cc);
    if (mystr[2] == NULL) return input;
    else return NULL;
    return NULL;
}