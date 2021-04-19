/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_number_base
*/

#include "printf.h"

int flag_binary(va_list ap)
{
    unsigned int i = va_arg(ap, int);
    char *str = "01";
    int counter = count_printed_char(i);

    my_putnbr_base(i, str);
    return (counter);
}