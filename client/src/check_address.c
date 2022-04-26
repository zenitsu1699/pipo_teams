/*
** EPITECH PROJECT, 2021
** check_address.c
** File description:
** check_address
*/

#include "../include/include.h"

int check_address(char *str)
{
    char **mystr = NULL;
    char *copy = NULL;
    int n = 0;

    copy = clone_string(str);
    mystr = my_str_to_word_tab(copy, ".");
    for (n = 0; mystr[n] != NULL; n++) {
        if ((strlen(mystr[n]) > 1) && mystr[n][0] == '0')
            return 84;
        if (atoi(mystr[n]) < 0) return 84;
        else if (atoi(mystr[n]) > 255) return 84; }
    if (n != 4) return 84;
    return 0;
}