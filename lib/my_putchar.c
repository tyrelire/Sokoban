/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** displays
*/
#include "../include/my.h"

int my_putchar(char c)
{
    return write(1, &c, 1);
}
