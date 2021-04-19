/*
** EPITECH PROJECT, 2020
** printf
** File description:
** create fill array of flags function
*/

#include "printf.h"

t_flag_printf *create_fill_array_two(void)
{
    t_flag_printf *flag_array = malloc(sizeof(t_flag_printf) * 7);

    if (flag_array == NULL)
        return (NULL);
    flag_array[0].flag = 'b';
    flag_array[0].ptr = &flag_binary;
    flag_array[1].flag = 'i';
    flag_array[1].ptr = &flag_int;
    flag_array[2].flag = '%';
    flag_array[2].ptr = &flag_percent;
    flag_array[3].flag = 'p';
    flag_array[3].ptr = &flag_pointer;
    flag_array[4].flag = 'u';
    flag_array[4].ptr = &flag_unsigned_int;
    flag_array[5].flag = 'z';
    flag_array[5].ptr = &flag_octal;
    flag_array[6].ptr = NULL;
    return (flag_array);
}