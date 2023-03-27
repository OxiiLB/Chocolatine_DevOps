/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int rest = 0;

    if (nb == 0 || nb == 1)
        return 0;

    for (int div = 2; div < nb; div++) {
        rest = nb % div;
        if (rest == 0)
            return 0;
        div = div + 1;
    }
    return 1;
}
