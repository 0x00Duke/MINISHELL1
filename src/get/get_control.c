/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** get_env.c
*/

#include "mysh.h"

control_t *add_to_myenv(control_t *control, char *str)
{
    char *name = get_name(str);
    char *value = get_value(str);

    if (!name || !value)
        return (NULL);
    control = add_end(control, name, value);
    if (!control)
        return (NULL);
    return (control);
}

control_t *get_control(char **env)
{
    control_t *control = init_control();
    int x = 0;

    if (!control)
        return (NULL);
    while (env[x]) {
        control = add_to_myenv(control, env[x]);
        if (!control)
            return (NULL);
        x++;
    }
    control->path = get_path(control);
    if (!control->path)
        return (NULL);
    return (control);
}