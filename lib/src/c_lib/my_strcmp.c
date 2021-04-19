/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** compare two str
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (s1[i] < s2[i])
        return (-1);
    else if (s1[i] > s2[i])
        return (1);
    else
        return (0);
}
