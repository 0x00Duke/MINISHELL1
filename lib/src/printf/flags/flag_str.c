/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_str
*/

#include "printf.h"

int flag_str(va_list ap)
{
    char *str = va_arg(ap, char *);
    int counter = my_strlen(str);

    my_putstr(str);
    return (counter);
}