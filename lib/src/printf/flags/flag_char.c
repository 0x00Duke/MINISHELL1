/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_char
*/

#include "printf.h"

int flag_char(va_list ap)
{
    char c = va_arg(ap, int);

    my_putchar(c);
    return (1);
}