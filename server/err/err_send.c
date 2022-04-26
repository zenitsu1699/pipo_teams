/*
** EPITECH PROJECT, 2021
** err_send.c
** File description:
** err_send
*/

#include "../include/include.h"

char *err_send(char *input)
{
    char *copy = clone_string(input);
    char *cc = init_second_param();
    char **mystr = my_str_to_word_tab(copy, " ");

    if (mystr[1][0] != '"') return NULL;
    copy = clone_string(input);
    mystr = my_str_to_word_tab(copy, cc);
    if (mystr[4] == NULL) {
        for (int l = 0; mystr[2][l] != '\0'; l++)
            if (mystr[2][l] != ' ') return NULL;
        return input; }
    else if (mystr[5] == NULL) {
        for (int l = 0; mystr[2][l] != '\0'; l++)
            if (mystr[2][l] != ' ') return NULL;
        for (int l = 0; mystr[4][l] != '\0'; l++)
            if (mystr[4][l] != ' ') return NULL;
        return input; }
    else return NULL;
    return NULL;
}
