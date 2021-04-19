/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** main.c
*/

#include "mysh.h"

int main(int ac, char **av, char **env)
{
    (void)av;
    if (ac != 1)
        return (84);
    return (minishell(env));
}