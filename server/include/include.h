/*
** EPITECH PROJECT, 2021
** B-NWP-400-COT-4-1-myteams-siegfried.avlessi
** File description:
** *
*/

#ifndef __MY_TEAMS_H__
#define __MY_TEAMS_H__

#include "lib.h"

void usage(void);
int check_port(char *str);
char *clone_string(char *s);

int create_socket(void);
void config_socket(int fd_socket, int port, struct sockaddr_in *address);
void initializing_the_queue(int fd_socket, int backlog);
int accept_incoming_connection(int fd_socket, struct sockaddr_in *address);
int creating_a_socket(void);
int connected_server(int fd_socket, int port, char *ip_adress);
char *info(int fd_socket);
char *get_input(int sd);
char **my_str_to_word_tab(char *input, char *c);
char **all_commands(void);
char *bad_command(char *input);
char *init_second_param(void);
char *generate_uuid_user(void);
char *str_remove(char *string, char *substring);

void close_shared_lib(void **handle);
void open_shared_lib(void **handle);

the_data *all_the_clients(void);
void get_max_sd(int *master_socket, the_data *c_user,
	fd_set *readfds, int *max_sd);
void add_new_connection(the_data *c_user, int new_socket,
	struct sockaddr_in address, fd_set *readfds);
void get_the_command(int sd, the_data *c_user,
	struct sockaddr_in address, int index);
void create_multi_connection_client(int *master_socket, the_data *c_user,
	struct sockaddr_in address, fd_set *readfds);
void com_multi_clients(int *master_socket, the_data *c_user,
	struct sockaddr_in address, fd_set *readfds);
int server(int port);

char *err_logout(char *input);
char *err_login(char *input);
char *err_subscribe(char *input);
char *err_unsubscribe(char *input);
char *err_create(char *input);
char *err_send(char *input);

int check_name_login(char *user_name);
int is_login(the_data *c_user, int index);


void exec_cmd(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void login_firstly_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void logout_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void login_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void send_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void create_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void subscribe_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);
void unsubscribe_exc(int sd, the_data *c_user, char *input,
	struct sockaddr_in address, int index);

#endif
