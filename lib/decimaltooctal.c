/*
** EPITECH PROJECT, 2022
** decimaltooctal
** File description:
** decimaltooctal
*/
#include "my.h"

int decimaltooctal(int number)
{
    int octal[10];
    int i = 0;
    int j = 0;
    for (i = 0; number > 0; i++) {
        octal[i] = number % 8;
        number = number / 8;
    }
    for (j = i - 1; j >= 0; j--) {
        my_put_nbr(octal[j]);
    }
    return 0;
}
