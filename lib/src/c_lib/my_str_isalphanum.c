/*
** EPITECH PROJECT, 2020
** lib
** File description:
** is_alphanum.c
*/

#include "lib.h"

int is_alphanum(char c)
{
    if (is_letter(c) == 1 && is_num(c) == 1)
        return (1);
    return (0);
}

int my_str_isalphanum(char *str)
{
    int x = 0;

    while (str[x]) {
        if (is_alphanum(str[x]) == 1)
            return (1);
        x++;
    }
    return (0);
}