/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** env.c
*/

#include "mysh.h"

control_t *print_env(control_t *control, char **arg)
{
    (void)arg;
    print_list(control->first);
    return (control);
}