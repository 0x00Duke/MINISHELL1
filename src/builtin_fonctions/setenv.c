/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** setenv.c
*/

#include "mysh.h"

control_t *put_in_env(control_t *control, char *name, char *value)
{
    list_t *tmp = control->first;

    while (tmp) {
        if (my_strcmp(name, tmp->name) == 0) {
            tmp->value = my_strdup(value);
            return (control);
        }
        tmp = tmp->next;
    }
    return (add_end(control, my_strdup(name), my_strdup(value)));
}

control_t *my_set_env(control_t *control, char **arg)
{
    char *name;
    char *value;

    if (size_array(arg) > 3) {
        put_error(MANY_ARG);
        return (control);
    }
    if (size_array(arg) == 1)
        return (print_env(control, arg));
    if (my_str_isalphanum(arg[1]) == 1) {
        put_error(ALPHANUM);
        return (control);
    }
    name = arg[1];
    if (arg[2])
        value = arg[2];
    else
        value = my_strdup("");
    return (put_in_env(control, name, value));
}