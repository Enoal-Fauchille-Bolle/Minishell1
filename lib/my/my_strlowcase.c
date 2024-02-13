/*
** EPITECH PROJECT, 2024
** my_strlowcase
** File description:
** Returns a string in lowercase
*/

#include "my.h"
#include <stdlib.h>

char *my_strlowcase(char *str)
{
    int i = 0;
    char *result = malloc(sizeof(char) * my_strlen(str));

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] + 32;
        } else {
            result[i] = str[i];
        }
        i++;
    }
    return result;
}
