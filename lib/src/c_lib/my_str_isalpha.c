/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** check if only char
*/

int is_letter(char c)
{
    if ((c < 'a' || c > 'z') && (c < 65 || c > 90))
        return (1);
    return (0);
}

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (is_letter(str[i]) == 1)
            return (1);
        i++;
    }
    return (0);
}
