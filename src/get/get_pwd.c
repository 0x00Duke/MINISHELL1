/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_pwd.c
*/

#include "mysh.h"

char *get_pwd_promp(void)
{
    char *buff = NULL;
    char *pwd = getcwd(buff, 0);

    return (pwd);
}

char *get_pwd(control_t *control)
{
    char *buff = NULL;
    char *pwd = getcwd(buff, 0);

    control = my_set_env(control, get_arr_arg("PWD", pwd));
    return (pwd);
}