/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** displays one by one char in a str
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
