/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** check if only digit in str
*/

int is_num(char c)
{
    if (c < '0' || c > '9')
        return (1);
    return (0);
}

int my_str_isnum(char const *str)
{
    int i = 0;
    if (str[0] == '-')
        i++;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return (1);
        i++;
    }
    return (0);
}
