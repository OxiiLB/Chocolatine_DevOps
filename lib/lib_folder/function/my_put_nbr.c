/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** display a number
*/

int my_putchar(char c);
int my_putstr(char const *str);

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        char *str = "-2147483648";
        if (my_putstr(str) == -1)
            return -1;
        return 0;
    }
    if (nb < 0) {
        if (my_putchar('-') == -1)
            return -1;
        nb = nb * -1;
    }
    if (nb > 9) {
        if (my_put_nbr(nb / 10) == -1)
            return -1;
        if (my_putchar(nb % 10 + 48) == -1)
            return -1;
    } else if (my_putchar(nb + 48) == -1)
        return -1;
    return 0;
}
