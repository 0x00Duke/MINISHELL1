/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_home.c
*/

#include "mysh.h"

char *get_home(control_t *control)
{
    list_t *tmp = control->first;

    while (tmp) {
        if (my_strcmp(tmp->name, "HOME") == 0)
            return (tmp->value);
        tmp = tmp->next;
    }
    control = my_set_env(control, get_arr_arg("HOME",
    my_strcat("/home/", get_user(control))));
    if (!control)
        return (NULL);
    return (get_home(control));
}