/*
** EPITECH PROJECT, 2020
** printf
** File description:
** flag_int
*/

#include "printf.h"

int count_printed_char(int i)
{
    int counter = 0;

    while (i) {
        i = i / 10;
        counter++;
    }
    return (counter);
}