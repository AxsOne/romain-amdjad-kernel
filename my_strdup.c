/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** stdup
*/
#include <stdlib.h>
#include "my.h"

char *my_strdup(char *str)
{
    if (!str)
        return "";
    int count = 0;
    char *copy = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (; str[count]; count++)
        copy[count] = str[count];
    copy[count] = '\0';
    return copy;
}
