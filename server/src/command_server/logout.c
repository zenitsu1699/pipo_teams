/*
** EPITECH PROJECT, 2021
** logout.c
** File description:
** logout
*/

#include "../../include/include.h"

void logout_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index)
{
    void *handle = NULL;
    char *error = NULL;
    int (*_server_event_user_logged_out)(char const *user_uuid);

    if (is_login(c_user, index) == 0){
        dprintf(sd, "%s", ERR_LOGOUT);
        return;
    }
    open_shared_lib(&handle);
    _server_event_user_logged_out = (int (*)(char const *user_uuid))
        dlsym(handle, "server_event_user_logged_out");
    error = dlerror();
    if (error != NULL)
        handle_error("dlerror");
    (*_server_event_user_logged_out)(c_user[index].client_info->user_uuid);
    close(sd);
    c_user[index].client_socket = 0;
    c_user[index].client_ip = NULL;
    c_user[index].client_port = 0;
    c_user[index].client_info = NULL;
    close_shared_lib(&handle);
}
