/*
** EPITECH PROJECT, 2021
** B-NWP-400-COT-4-1-myteams-siegfried.avlessi
** File description:
** main
*/

#include "../include/include.h"

int main(int ac, char **av)
{
    if (ac > 3 || ac <= 1) return 84;
    else if (ac == 2)
        if (strcmp(av[1], "-help") == 0) {
            usage();
            return 0; }
        else return 84;
    else {
        if (check_address(av[1])) return 84;
        else if (check_port(av[2])) return 84;
        client(av[1], atoi(av[2])); }
    return (0);
}