/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** return the length of a string
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;
    if (str == NULL)
        return -1;
    for (; str[i] != '\0'; i++);
    return i;
}
