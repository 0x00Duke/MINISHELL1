/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** init_control.c
*/

#include "mysh.h"

control_t *init_control(void)
{
    control_t *list = malloc(sizeof(control_t));

    if (list == NULL)
        return (NULL);
    list->first = NULL;
    list->last = NULL;
    list->size = 0;
    list->run = true;
    list->ret = 0;
    list->path = NULL;
    return (list);
}