/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_user.c
*/

#include "mysh.h"

char *get_user(control_t *control)
{
    list_t *tmp = control->first;

    while (tmp) {
        if (my_strcmp("USER", tmp->name) == 0)
            return (tmp->value);
        tmp = tmp->next;
    }
    return ("user");
}