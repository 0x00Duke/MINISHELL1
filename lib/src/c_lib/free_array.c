/*
** EPITECH PROJECT, 2020
** lib
** File description:
** free_array.c
*/

#include "lib.h"

void free_array(char **array)
{
    int x = 0;

    while (array[x]) {
        free(array[x]);
        x++;
    }
    free(array);
}

