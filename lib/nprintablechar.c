/*
** EPITECH PROJECT, 2022
** nprintablechar
** File description:
** nprintablechar
*/
#include "my.h"

int nprintablechar(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            decimaltooctal(str[i]);
            i++;
        } else {
            my_putchar(*str);
        }
    }
    return 0;
}
