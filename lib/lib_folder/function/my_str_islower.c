/*
** EPITECH PROJECT, 2022
** my_str_islower
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    if (str[0] == '\0') {
        return 1;
    }
    for (int count = 0; str[count] != '\0'; count++) {
        if ((str[count] < 'a' || str[count] > 'z') && (str[count] != ' '))
            return 0;
    }
    return 1;
}
