/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_pointer
*/

#include "printf.h"

int flag_pointer(va_list ap)
{
    char *base = "0123456789abcdef";
    unsigned int ptr = va_arg(ap, unsigned int);

    my_putstr("0x");
    my_putnbr_base(ptr, base);
    return (0);
}