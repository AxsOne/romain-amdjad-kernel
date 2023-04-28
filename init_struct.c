/*
** EPITECH PROJECT, 2023
** boostrap
** File description:
** boostrap
*/
#include "my.h"
#include <stdlib.h>

add_t *init_add(void)
{
    add_t *add = malloc(sizeof(add_t));
    if (!add)
        return NULL;
    return add;
}

sub_t *init_sub(void)
{
    sub_t *sub = malloc(sizeof(sub_t));
    if (!sub)
        return NULL;
    return sub;
}

mul_t *init_mul(void)
{
    mul_t *mul = malloc(sizeof(mul_t));
    if (!mul)
        return NULL;
    return mul;
}

put_t *init_put(void)
{
    put_t *put = malloc(sizeof(put_t));
    if (!put)
        return NULL;
    return put;
}
