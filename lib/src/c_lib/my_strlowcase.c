/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** put char of str in lowcase
*/

#include "lib.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
            i++;
        }
        else
            i++;
    }
    return (str);
}
