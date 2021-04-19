/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** split_env.c
*/

#include "mysh.h"

int len_name(char *str)
{
    int x = 0;

    while (str[x] != '=' && str[x])
        x++;
    return (x);
}

char *get_name(char *str)
{
    int x = 0;
    char *name = malloc(sizeof(char) * (len_name(str) + 1));

    if (!name)
        return (NULL);
    while (str[x] != '=') {
        name[x] = str[x];
        x++;
    }
    name[x] = '\0';
    return (name);
}

int len_value(char *str)
{
    int x = 0;
    int i = 0;

    while (str[x] != '=')
        x++;
    while (str[x]) {
        x++;
        i++;
    }
    return (i);
}

char *get_value(char *str)
{
    char *value = malloc(sizeof(char) * (len_value(str) + 1));
    int x = my_strlen(str) - len_value(str) + 1;
    int i = 0;

    if (!value)
        return (NULL);
    while (str[x]) {
        value[i] = str[x];
        i++;
        x++;
    }
    value[i] = '\0';
    return (value);
}