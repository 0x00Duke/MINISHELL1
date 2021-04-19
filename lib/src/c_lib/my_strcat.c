/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenate two str
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int n = 0;
    char *res = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    if (!res)
        return (NULL);
    while (dest[i]){
        res[i] = dest[i];
        i++;
    }
    while (src[n]){
        res[i] = src[n];
        i++;
        n++;
    }
    res[i] = '\0';
    return (res);
}
