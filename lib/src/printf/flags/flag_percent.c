/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_percent
*/

#include "printf.h"

int flag_percent(va_list ap)
{
    (void)ap;
    my_putchar('%');
    return (1);
}