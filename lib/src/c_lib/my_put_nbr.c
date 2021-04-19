/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** print number
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb > 2147483647 || nb <= -2147483648)
        return (84);
    if (nb >= 0 && nb < 10)
        my_putchar(nb + '0');
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else {
        if (nb / 10)
            my_put_nbr(nb / 10);
        my_putchar(48 + (nb % 10));
    }
    return (0);
}
