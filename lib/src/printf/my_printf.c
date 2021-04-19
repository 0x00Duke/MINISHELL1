/*
** EPITECH PROJECT, 2020
** printf
** File description:
** my_printf
*/

#include "printf.h"

int my_printf(char *str, ...)
{
    int i = 0;
    va_list ap;
    va_start(ap, str);

    while (str[i]) {
        if (str[i] == '%' && str[i + 1] == '%') {
            my_putchar('%');
            i++;
        } else if (str[i] == '%') {
            if (str[i + 1] == ' ')
                while (str[i + 1] == ' ')
                    i++;
            run_flag_function(ap, str[i + 1]);
            i++;
        } else
            my_putchar(str[i]);
        i++;
    }
    va_end(ap);
    return (0);
}