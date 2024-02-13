/*
** EPITECH PROJECT, 2024
** my_slice
** File description:
** Slices a string
*/

#include <stdlib.h>

char *my_slice(char const *str, int start, int end)
{
    char *result = malloc(end - start + 1);

    for (int i = start; i < end; i++) {
        result[i - start] = str[i];
    }
    result[end - start] = '\0';
    return result;
}
