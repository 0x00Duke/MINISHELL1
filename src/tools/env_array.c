/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** env_array.c
*/

#include "mysh.h"

char **env_array(control_t *control)
{
    char **env_array = malloc(sizeof(char *) * (control->size + 1));
    list_t *tmp = control->first;
    int x = 0;
    char *str;

    if (!env_array)
        return (NULL);
    while (tmp) {
        str = my_strcat(tmp->name, "=");
        if (!str)
            return (NULL);
        str = my_strcat(str, tmp->value);
        if (!str)
            return (NULL);
        env_array[x] = str;
        x++;
        tmp = tmp->next;
    }
    env_array[x] = NULL;
    return (env_array);
}