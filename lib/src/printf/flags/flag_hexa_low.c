/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_hexa_lower
*/

#include "printf.h"

int flag_hexa_low(va_list ap)
{
    int i = va_arg(ap, int);
    char *str = "0123456789abcdef";
    int counter = count_printed_char(i);

    my_putnbr_base(i, str);
    return (counter);
}