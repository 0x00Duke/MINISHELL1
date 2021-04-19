/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** exit.c
*/

#include "mysh.h"

int control_d_exit(void)
{
    my_printf(EXIT);
    return (0);
}

control_t *my_exit(control_t *control, char **arg)
{
    if (!arg[1]) {
        my_putstr(EXIT);
        control->run = false;
        return (control);
    }
    if (arg[2]) {
        put_error(EXIT_SYNTAX);
        return (control);
    }
    if (my_str_isnum(arg[1]) == 1) {
        if (is_num(arg[1][0]) == 0 || arg[1][0] == '-')
            put_error(EXIT_BADNB);
        else
            put_error(EXIT_SYNTAX);
        return (control);
    }
    my_putstr(EXIT);
    control->ret = my_getnbr(arg[1], 0);
    control->run = false;
    return (control);
}