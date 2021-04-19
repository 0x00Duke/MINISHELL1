/*
** EPITECH PROJECT, 2020
** my_putnbr_base.c
** File description:
** print number depend of the base
*/

void my_putchar(char c);

int my_strlen(char *str);

int my_putnbr_base(int nbr, char *base)
{
    int size = my_strlen(base);

    if (nbr > 2147483647 || nbr <= -2147483648)
        return (84);
    if (nbr == 0) {
        return (0);
    } else if (nbr < 0) {
        my_putchar('-');
        my_putnbr_base(nbr * -1, base);
    } else {
        if (nbr == 0) {
            return (0);
        } else {
            my_putnbr_base((nbr / size), base);
            my_putchar(base[nbr % size]);
        }
    }
    return (0);
}