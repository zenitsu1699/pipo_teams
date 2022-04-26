/*
** EPITECH PROJECT, 2021
** login.c
** File description:
** login
*/

#include "../../include/include.h"

void login_firstly_exc(int sd, the_data *c_user, char *input,
   struct sockaddr_in address, int index)
{
    void *handle = NULL;
    char *error = NULL;
    int (*_server_event_user_created)(char const *user_uuid,
                                      char const *user_name);
    char *uuid_user = generate_uuid_user();
    char **mystr = NULL;
    char *cc = init_second_param();

    if (is_login(c_user, index) != 0)
    {
        dprintf(sd, "%s", ERR_LOGIN);
        dprintf(sd, "%s", ERR_LOGIN_EXIT);
        return;
    }
    open_shared_lib(&handle);
    _server_event_user_created =
        (int (*)(char const *user_uuid, char const *user_name))
            dlsym(handle, "server_event_user_created");
    error = dlerror();
    if (error != NULL)
        handle_error("dlerror");
    mystr = my_str_to_word_tab(input, cc);
    c_user[index].client_info = malloc(sizeof(the_info));
    c_user[index].client_info->user_uuid = clone_string(uuid_user);
    if (check_name_login(mystr[1]))
    {
        dprintf(sd, "%s", ERR_LOGIN);
        dprintf(sd, "%s", ERR_LOGIN_SIZE);
        return;
    }
    c_user[index].client_info->user_name = clone_string(mystr[1]);
    (*_server_event_user_created)(uuid_user, mystr[1]);
    close_shared_lib(&handle);
}

void login_exc(int sd, the_data *c_user, char *input,
    struct sockaddr_in address, int index)
{
    char *copy = clone_string(input);
    char **my_str = my_str_to_word_tab(copy, " ");

    if (my_str[1] != NULL)
    {
        login_firstly_exc(sd, c_user, input, address, index);
        return;
    }
}