/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_hexa_upper
*/

#include "printf.h"

int flag_hexa_upper(va_list ap)
{
    int i = va_arg(ap, int);
    char *str = "0123456789ABCDEF";
    int counter = count_printed_char(i);

    my_putnbr_base(i, str);
    return (counter);
}