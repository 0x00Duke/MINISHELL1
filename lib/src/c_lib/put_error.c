/*
** EPITECH PROJECT, 2020
** lib
** File description:
** put_error.c
*/

#include "lib.h"

void my_putchar_error(char c)
{
    write(2, &c, 1);
}

void put_error(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar_error(str[i]);
        i++;
    }
}
