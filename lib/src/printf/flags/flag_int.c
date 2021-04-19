/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_int
*/

#include "printf.h"

int flag_int(va_list ap)
{
    int i = va_arg(ap, int);
    int counter = count_printed_char(i);

    my_put_nbr(i);
    return (counter);
}