/*
** EPITECH PROJECT, 2020
** lib
** File description:
** size_array.c
*/

#include "lib.h"

int size_array(char **array)
{
    int x = 0;

    while (array[x])
        x++;
    return (x);
}