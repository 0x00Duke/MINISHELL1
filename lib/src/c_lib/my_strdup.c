/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** allocate some memory and copy a str in it
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str;
    int len = my_strlen(src);
    int i = 0;

    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    while (src[i]){
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
