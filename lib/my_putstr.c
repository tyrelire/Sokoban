/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** task02 day04
*/
#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str [i]);
        i = i + 1;
    }
    return (0);
}
