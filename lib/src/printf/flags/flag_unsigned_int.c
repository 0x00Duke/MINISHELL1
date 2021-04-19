/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_unsigned_int
*/

#include "printf.h"

int flag_unsigned_int(va_list ap)
{
    unsigned int i = va_arg(ap, int);
    int counter = count_printed_char(i);

    my_put_unsigned_nbr(i);
    return (counter);
}