/*
** EPITECH PROJECT, 2020
** printf
** File description:
** create fill array of flags function
*/

#include "printf.h"

t_flag_printf *create_fill_array(void)
{
    t_flag_printf *flag_array = malloc(sizeof(t_flag_printf) * 7);

    if (flag_array == NULL)
        return (NULL);
    flag_array[0].flag = 's';
    flag_array[0].ptr = &flag_str;
    flag_array[1].flag = 'c';
    flag_array[1].ptr = &flag_char;
    flag_array[2].flag = 'd';
    flag_array[2].ptr = &flag_int;
    flag_array[3].flag = 'o';
    flag_array[3].ptr = &flag_octal;
    flag_array[4].flag = 'x';
    flag_array[4].ptr = &flag_hexa_low;
    flag_array[5].flag = 'X';
    flag_array[5].ptr = &flag_hexa_upper;
    flag_array[6].ptr = NULL;
    return (flag_array);
}