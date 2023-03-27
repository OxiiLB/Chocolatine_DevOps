/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** display a string
*/

#include "unistd.h"
int my_putchar(char c);

int my_putstr(char const *str)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_putchar(str[i]) == -1)
            return -1;
    }
    return 0;
}
