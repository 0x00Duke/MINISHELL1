/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_arg.c
*/

#include "mysh.h"

int check_arg(char **arg)
{
    if (size_array(arg) == 2 && (my_strcmp(arg[1], "") == 0 ||
    my_strcmp(arg[1], " ") == 0 || my_strcmp(arg[1], "\t") == 0 ||
    my_strcmp(arg[1], "\n") == 0))
        return (1);
    return (0);
}

char **get_arg(char *str)
{
    char **arg = split(str, "|;><");
    int size;
    int size_str;

    if (!arg)
        return (NULL);
    size = size_array(arg) - 1;
    size_str = my_strlen(arg[size]) - 1;
    arg[size][size_str] = '\0';
    if (size > 0 && my_strcmp(arg[size], "\0") == 0) {
        free(arg[size]);
        arg[size] = NULL;
        size--;
    }
    return (arg);
}