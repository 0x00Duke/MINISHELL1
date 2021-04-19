/*
** EPITECH PROJECT, 2020
** printf
** File description:
** run flag function
*/

#include "printf.h"

void run_flag_function(va_list ap, char c)
{
    int i = 0;
    t_flag_printf *flag_array = create_fill_array();
    t_flag_printf *flag_array_two = create_fill_array_two();

    if (flag_array == NULL)
        return;
    while (flag_array[i].ptr != NULL || flag_array_two[i].ptr != NULL) {
        if (c == flag_array[i].flag)
            flag_array[i].ptr(ap);
        if (c == flag_array_two[i].flag)
            flag_array_two[i].ptr(ap);
        i++;
    }
    free(flag_array);
    free(flag_array_two);
}