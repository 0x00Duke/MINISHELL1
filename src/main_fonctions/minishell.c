/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** minishell.c
*/

#include "mysh.h"

int minishell(char **env)
{
    control_t *control = get_control(env);
    int ret;

    if (!control)
        return (84);
    ret = minishell_loop(control);
    free_list(control);
    return (ret);
}