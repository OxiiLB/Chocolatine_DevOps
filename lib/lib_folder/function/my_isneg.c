/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** return if it's negative or not
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        if (my_putchar('N') == -1)
            return -1;
    } else {
        if (my_putchar('P') == -1)
            return -1;
    }
    return 0;
}
