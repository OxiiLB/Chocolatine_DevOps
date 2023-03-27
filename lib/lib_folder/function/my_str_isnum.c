/*
** EPITECH PROJECT, 2022
** my_str_is_num
** File description:
** my_str_isnum
*/

#include <unistd.h>

int my_str_isnum(char const *str)
{
    if (str == NULL)
        return -1;
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && (str[i] != ' ')) {
            return 0;
        }
    }
    return 1;
}
