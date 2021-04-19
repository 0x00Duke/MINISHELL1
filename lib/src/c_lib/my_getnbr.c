/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** return a number send as a str
*/

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int my_getnbr(char const *str, int i)
{
    int nbr = 0;
    int sign = 1;

    while (str[i] && (str[i] == '-' || str[i] == '+')){
        if (str[i] == '-')
            sign = sign * - 1;
        i++;
    }
    while (is_digit(str[i]) == 1){
        if (nbr >= 247483647)
            return (0);
        nbr = nbr * 10;
        nbr = nbr + (str[i] - 48);
        i++;
    }
    nbr = nbr * sign;
    return (nbr);
}
