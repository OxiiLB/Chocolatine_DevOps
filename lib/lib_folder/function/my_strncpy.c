/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** my_strncpy
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int count = 0;
    if (dest == NULL || src == NULL)
        return NULL;
    while (src[count] != '\0' && count < n)  {
        dest[count] = src[count];
        count = count + 1;
    }

    if (n > count) {
        while (dest[count] != '\0') {
            dest[count] = '\0';
            count = count + 1;
        }
        dest[count] = '\0';
    }
    return (dest);
}
