/*
** EPITECH PROJECT, 2021
** bad_command.c
** File description:
** bad_command.c
*/

#include "../include/include.h"

the_commands *init_command(void)
{
    the_commands *my_cmd = malloc(sizeof(the_commands) * 6);

    if (my_cmd == NULL) handle_error("malloc");
    my_cmd[0].cmd = clone_string("/logout");
    my_cmd[1].cmd = clone_string("/login");
    my_cmd[2].cmd = clone_string("/subscribe");
    my_cmd[3].cmd = clone_string("/unsubscribe");
    my_cmd[4].cmd = clone_string("/create");
    my_cmd[5].cmd = clone_string("/send");
    my_cmd[0].my_function = &err_logout;
    my_cmd[1].my_function = &err_login;
    my_cmd[2].my_function = &err_subscribe;
    my_cmd[3].my_function = &err_unsubscribe;
    my_cmd[4].my_function = &err_create;
    my_cmd[5].my_function = &err_send;
    return my_cmd;
}

char *bad_command(char *input)
{
    char *token = NULL;
    the_commands *my_cmd = init_command();
    char *copy = clone_string(input);

    token = strtok(copy, " ");
    for (int l = 0; l < 6; l++)
        if (strcmp(token, my_cmd[l].cmd) == 0)
            return my_cmd[l].my_function(input);
    return NULL;
}