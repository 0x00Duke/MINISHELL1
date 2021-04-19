/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** minishell_loop.c
*/

#include "mysh.h"

int minishell_loop(control_t *control)
{
    char *input = NULL;
    long unsigned int x = 0;
    char **arg;
    fpointers_t *fonctions = init_array();

    if (!fonctions)
        return (84);
    while (control->run) {
        print_prompt(get_pwd_promp(), get_user(control));
        if (getline(&input, &x, stdin) == -1)
            return (control_d_exit());
        arg = get_arg(input);
        if (arg[0][0] && my_strcmp("\n", arg[0]) != 0)
            control = luch_fonction(control, arg, fonctions);
        if (!control)
            return (84);
    }
    free_array(arg);
    return (control->ret);
}