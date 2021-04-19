/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_path.c
*/

#include "mysh.h"

char *get_all_path(list_t *my_env)
{
    list_t *tmp = my_env;

    while (tmp) {
        if (my_strcmp("PATH", tmp->name) == 0)
            return (tmp->value);
        tmp = tmp->next;
    }
    return (RESCUE_PATH);
}

char **get_path(control_t *control)
{
    char *all_path = get_all_path(control->first);
    char **split_path = split(all_path, ":");

    if (!split_path)
        return (NULL);
    return (split_path);
}