/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** print_strarray.c
*/

#include "lib.h"

void print_strarray(char **array)
{
    int x = 0;

    while (array[x]) {
        my_printf("[%s]\n", array[x]);
        x++;
    }
}