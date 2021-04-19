/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_oldpath.c
*/

#include "mysh.h"

char *get_oldpwd(control_t *control)
{
    list_t *tmp = control->first;

    while (tmp) {
        if (my_strcmp(tmp->name, "OLDPWD") == 0)
            return (tmp->value);
        tmp = tmp->next;
    }
    control = my_set_env(control, get_arr_arg("OLDPWD", get_pwd(control)));
    return (get_oldpwd(control));
}