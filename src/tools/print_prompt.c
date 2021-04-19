/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** print_prompt.c
*/

#include "mysh.h"

void print_prompt(char *pwd, char *name)
{
    my_printf("%s<$[%s%s%s][%s%s%s]$>%s ",
    RED, BLUE, pwd, RED, BLUE, name, RED, WHITE);
}