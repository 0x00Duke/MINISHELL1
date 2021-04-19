/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** mysh.h
*/

#ifndef MYSH_H
#define MYSH_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>

#include "lib.h"
#include "printf.h"
#include "list.h"
#include "struct.h"
#include "maccro.h"

int minishell(char **env);
int minishell_loop(control_t *control);

char **get_arr_arg(char *name, char *value);

control_t *get_control(char **env);
char **get_arg(char *str);
char *get_value(char *str);
char *get_name(char *str);
char *get_pwd(control_t *control);
char *get_pwd_promp(void);
char *get_user(control_t *control);
char **get_path(control_t *control);
char *get_home(control_t *control);
char *get_oldpwd(control_t *control);

void print_prompt(char *pwd, char *name);
char *put_slash(char *str);

fpointers_t *init_array(void);
control_t *init_control(void);

control_t *print_env(control_t *control, char **arg);
control_t *my_set_env(control_t *control, char **arg);
control_t *my_unsetenv(control_t *control, char **arg);
control_t *my_exit(control_t *control, char **arg);
control_t *my_cd(control_t *control, char **arg);

int control_d_exit(void);

control_t *luch_fonction(control_t *control,
char **arg, fpointers_t *fonctions);
int check_path(control_t *control, char **arg);

char **env_array(control_t *control);

#endif