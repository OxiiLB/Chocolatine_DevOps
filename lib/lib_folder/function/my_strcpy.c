/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** copy a array into another one
*/

#include <unistd.h>

char *my_strcpy(char *dest, char const *src)
{
    int count = 0;
    if (dest == NULL || src == NULL)
        return NULL;
    while (src[count] != '\0') {
        dest[count] = src[count];
        count = count + 1;
    }
    while (dest[count] != '\0') {
        dest[count] = '\0';
        count = count + 1;
    }
    return dest;
}
