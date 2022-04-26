/*
** EPITECH PROJECT, 2021
** exec_command.c
** File description:
** exec_command
*/

#include "../../include/include.h"

exec_command *init_cmd_exec(void)
{
    exec_command *my_cmd = malloc(sizeof(exec_command) * 6);

    if (my_cmd == NULL) handle_error("malloc");
    my_cmd[0].cmd = clone_string("/logout");
    my_cmd[1].cmd = clone_string("/login");
    my_cmd[2].cmd = clone_string("/subscribe");
    my_cmd[3].cmd = clone_string("/unsubscribe");
    my_cmd[4].cmd = clone_string("/create");
    my_cmd[5].cmd = clone_string("/send");
    my_cmd[0].my_function = &logout_exc;
    my_cmd[1].my_function = &login_exc;
    my_cmd[2].my_function = &subscribe_exc;
    my_cmd[3].my_function = &unsubscribe_exc;
    my_cmd[4].my_function = &create_exc;
    my_cmd[5].my_function = &send_exc;
    return my_cmd;
}

void exec_cmd(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index)
{
    exec_command *my_cmd = init_cmd_exec();
    char *copy = clone_string(input);
    char *token = NULL;

    token = strtok(copy, " ");
    for (int l = 0; l < 6; l++)
        if (strcmp(token, my_cmd[l].cmd) == 0)
            my_cmd[l].my_function(sd, c_user, input, address, index);
}
