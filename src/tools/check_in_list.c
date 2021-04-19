/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** check_in_list.c
*/

#include "mysh.h"

int check_in_list(list_t *list, char *str)
{
    list_t *tmp = list;

    while (tmp != NULL) {
        if (my_strcmp(tmp->name, str) == 0)
            return (1);
        tmp = tmp->next;
    }
    return (0);
}