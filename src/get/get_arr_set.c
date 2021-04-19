/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_arr_set.c
*/

#include "mysh.h"

char **get_arr_arg(char *name, char *value)
{
    char **arr = malloc(sizeof(char *) * 4);

    if (!arr)
        return (NULL);
    arr[0] = "";
    arr[1] = my_strdup(name);
    arr[2] = my_strdup(value);
    arr[3] = NULL;
    return (arr);
}