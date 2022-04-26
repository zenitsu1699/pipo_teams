/*
** EPITECH PROJECT, 2021
** B-NWP-400-COT-4-1-myteams-siegfried.avlessi
** File description:
** main
*/

#include "../include/include.h"

int main(int ac, char **av)
{
    if (ac == 1) return 84;
    else if (ac == 2)
        if (strcmp(av[1], "-help") == 0)
            usage();
        else if (check_port(av[1]) == 0)
            server(atoi(av[1]));
        else return 84;
    else return 84;
    return 0;
}