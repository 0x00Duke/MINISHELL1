/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_octal
*/

#include "printf.h"

int flag_octal(va_list ap)
{
    int i = va_arg(ap, int);
    char *str = "01234567";
    int counter = count_printed_char(i);

    my_putnbr_base(i, str);
    return (counter);
}