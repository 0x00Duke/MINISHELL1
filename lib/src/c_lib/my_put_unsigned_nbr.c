/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** print number
*/

void my_putchar(char c);

int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    else {
        if (nb / 10)
            my_put_unsigned_nbr(nb / 10);
        my_putchar(48 + (nb % 10));
    }
    return (0);
}