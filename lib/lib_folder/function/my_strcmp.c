/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** my_strcmp
*/

#include <unistd.h>

int my_strcmp(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
        return -1;
    for (int i = 0; s1[i] != '\0' || (s2[i] != '\0'); i += 1) {
        if (s1[i] - s2[i] != 0)
            return (s1[i] - s2[i]);
    }
    return 0;
}
