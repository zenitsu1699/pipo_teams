/*
** EPITECH PROJECT, 2021
** get_the_command.c
** File description:
** get_the_command.c
*/

#include "../../include/include.h"

void get_the_command(int sd, the_data *c_user,
	struct sockaddr_in address, int index)
{
    char *input = NULL;
    int addrlen = sizeof(address);

    input = get_input(sd);
    while (bad_command(input) == NULL) {
        dprintf(sd, "%s", ERR_COMMAND);
        input = get_input(sd); }
    exec_cmd(sd, c_user, input, address, index);
}
