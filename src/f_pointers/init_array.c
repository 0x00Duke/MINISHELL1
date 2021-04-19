/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** init_array.c
*/

#include "mysh.h"

fpointers_t *init_array(void)
{

    fpointers_t *builtin_fonct = malloc(sizeof(fpointers_t) * (NB_FUNCT + 1));

    if (!builtin_fonct)
        return (NULL);
    builtin_fonct[0].fonc = &print_env;
    builtin_fonct[0].name = "env";
    builtin_fonct[1].fonc = &my_set_env;
    builtin_fonct[1].name = "setenv";
    builtin_fonct[2].fonc = &my_unsetenv;
    builtin_fonct[2].name = "unsetenv";
    builtin_fonct[3].fonc = &my_exit;
    builtin_fonct[3].name = "exit";
    builtin_fonct[4].fonc = &my_cd;
    builtin_fonct[4].name = "cd";
    builtin_fonct[5].fonc = NULL;
    builtin_fonct[5].name = NULL;
    return (builtin_fonct);
}