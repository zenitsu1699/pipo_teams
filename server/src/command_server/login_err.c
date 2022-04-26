/*
** EPITECH PROJECT, 2021
** login_err.c
** File description:
** login_err
*/

#include "../../include/include.h"

char *generate_uuid_user(void)
{
    uuid_t binuuid;
    char *uuid = malloc(37);

    uuid_generate_random(binuuid);
#ifdef capitaluuid
    uuid_unparse_upper(binuuid, uuid);
#elif lowercaseuuid
    uuid_unparse_lower(binuuid, uuid);
#else
    uuid_unparse(binuuid, uuid);
#endif
    return uuid;
}

int is_login(the_data *c_user, int index)
{
    if (c_user[index].client_info == NULL) return 0;
    else return 1;
    return 2;
}

int check_name_login(char *user_name)
{
    int size = strlen(user_name);

    if (size > MAX_NAME_LENGTH) return 1;
    return 0;
}