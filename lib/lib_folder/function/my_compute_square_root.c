/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    for (; i < nb; i++) {
        if (i * i == nb)
            return i;
    }
    return i;
}
