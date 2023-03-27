/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** my_str_isalpha
*/

#include <unistd.h>

int my_str_isalpha(char const *str)
{
    if (str == NULL)
        return -1;
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'a' || str[i] > 'z') &&
        (str[i] < 'A' || str[i] > 'Z') && (str[i] != ' '))
            return 0;
    }
    return 1;
}
