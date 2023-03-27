/*
** EPITECH PROJECT, 2022
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int result = 0;
    if (nb <= 2)
        return 2;
    for (int i = nb; i < 2147483646; i++) {
        result = my_is_prime(i);
        if (result == 1)
            return i;
    }
    return 0;
}
