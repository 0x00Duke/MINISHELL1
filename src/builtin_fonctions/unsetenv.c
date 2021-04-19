/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** unsetenv.c
*/

#include "mysh.h"

control_t *erase(control_t *control, list_t *tmp)
{
    if (tmp->next && tmp->prev) {
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
    } else if (tmp->next) {
        tmp->next->prev = tmp->prev;
    } else {
        tmp->prev->next = tmp->next;
    }
    free_node(control, tmp);
    control->size--;
    return (control);
}

control_t *unset(control_t *control, char **arg, list_t *tmp, int x)
{
    while (tmp) {
        if (my_strcmp(tmp->name, arg[x]) == 0)
            return (erase(control, tmp));
        tmp = tmp->next;
    }
    return (control);
}

control_t *my_unsetenv(control_t *control, char **arg)
{
    list_t *tmp;
    int x = 1;

    if (!arg[1]) {
        put_error(FEW_ARG_UNSET);
        return (control);
    }
    while (arg[x]) {
        tmp = control->first;
        control = unset(control, arg, tmp, x);
        x++;
    }
    return (control);
}