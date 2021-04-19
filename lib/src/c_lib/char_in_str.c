/*
** EPITECH PROJECT, 2020
** B-PSU-210-BAR-2-1-minishell2-leon.ducasse
** File description:
** char_in_str.c
*/

#include "lib.h"

bool char_in_str(char *str, char c)
{
    int n = 0;

    while (str[n]) {
        if (str[n] == c)
            return (true);
        n++;
    }
    return (false);
}

bool chars_in_str(char *str, char *c)
{
    int n = 0;

    while (c[n]) {
        if (!char_in_str(str, c[n]))
            return (false);
        n++;
    }
    return (true);
}