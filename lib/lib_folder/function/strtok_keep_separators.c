/*
** EPITECH PROJECT, 2023
** strtok_keep_separators
** File description:
** function that split an str into a word array
** but takes in argument separators
*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);

static bool is_in_separators(char *separators, char c)
{
    for (int i = 0; separators[i] != '\0'; i++) {
        if (separators[i] == c)
            return true;
    }
    return false;
}

static char **malloc_words(char const *str, char *separators)
{
    int i, j, count = 0, max_len = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!is_in_separators(separators, str[i])) {
            count++;
            int len = 1;
            for (j = i + 1; str[j] != '\0' &&
                 !is_in_separators(separators, str[j]); j++) {
                len++;
            }
            if (len > max_len) {
                max_len = len;
            }
            i = j - 1;
        }
    }
    char **res = malloc(sizeof(char *) * (count + 1));
    if (res == NULL) {
        return NULL;
    }
    for (i = 0; i < count; i++) {
        res[i] = malloc(sizeof(char) * (max_len + 1));
        if (res[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(res[j]);
            }
            free(res);
            return NULL;
        }
    }
    res[count] = NULL;
    return res;
}

char **strtok_keep_separators(char const *str, char *separators)
{
    int i, j, k = 0;
    char **res = malloc_words(str, separators);
    if (res == NULL) {
        return NULL;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (is_in_separators(separators, str[i])) {
            res[k][0] = str[i];
            res[k][1] = '\0';
            k++;
        } else {
            for (j = i + 1; str[j] != '\0' &&
                 !is_in_separators(separators, str[j]); j++);
            int len = j - i;
            my_strncpy(res[k], str + i, len);
            res[k][len] = '\0';
            k++;
            i = j - 1;
        }
    }
    return res;
}