/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/
#include "../include/my.h"

p_t my_up(p_t P)
{
    if (P.tab[P.y - 1][P.x] == ' ' || P.tab[P.y - 1][P.x] == 'O') {
        P.tab[P.y][P.x] = ' '; P.y = P.y - 1;
        P.tab[P.y][P.x] = 'P';
    } else if (P.tab[P.y - 1][P.x] == 'X' && P.tab[P.y - 2][P.x] == ' ' || P.tab[P.y - 1][P.x] == 'X' && P.tab[P.y - 2][P.x] == 'O') {
        P.tab[P.y][P.x] = ' ', P.tab[P.y - 1][P.x] = ' ',
        P.tab[P.y - 1][P.x] = 'P', P.y = P.y - 1,
        P.tab[P.y - 1][P.x] = 'X';
    }
    return P;
}

p_t my_down(p_t P)
{
    if (P.tab[P.y + 1][P.x] == ' ' || P.tab[P.y + 1][P.x] == 'O') {
        P.tab[P.y][P.x] = ' '; P.y = P.y + 1;
        P.tab[P.y][P.x] = 'P';
    } else if (P.tab[P.y + 1][P.x] == 'X' && P.tab[P.y + 2][P.x] == ' ' || P.tab[P.y + 1][P.x] == 'X' && P.tab[P.y + 2][P.x] == 'O') {
        P.tab[P.y][P.x] = ' '; P.tab[P.y + 1][P.x] = ' ';
        P.tab[P.y + 1][P.x] = 'P'; P.y = P.y + 1;
        P.tab[P.y + 1][P.x] = 'X';
    }
    return P;
}

p_t my_left(p_t P)
{
    if (P.tab[P.y][P.x - 1] == ' ' || P.tab[P.y][P.x - 1] == 'O') {
        P.tab[P.y][P.x] = ' '; P.x = P.x - 1;
        P.tab[P.y][P.x] = 'P';
    } else if (P.tab[P.y][P.x - 1] == 'X' && P.tab[P.y][P.x - 2] == ' ' || P.tab[P.y][P.x - 1] == 'X' && P.tab[P.y][P.x - 2] == 'O') {
        P.tab[P.y][P.x] = ' '; P.tab[P.y][P.x - 1] = ' ';
        P.tab[P.y][P.x - 1] = 'P'; P.x = P.x - 1;
        P.tab[P.y][P.x - 1] = 'X';
    }
    return P;
}

p_t my_right(p_t P)
{
    if (P.tab[P.y][P.x + 1] == ' ' || P.tab[P.y][P.x + 1] == 'O') {
        P.tab[P.y][P.x] = ' '; P.x = P.x + 1;
        P.tab[P.y][P.x] = 'P';
    } else if (P.tab[P.y][P.x + 1] == 'X' && P.tab[P.y][P.x + 2] == ' ' || P.tab[P.y][P.x + 1] == 'X' && P.tab[P.y][P.x + 2] == 'O') {
        P.tab[P.y][P.x] = ' '; P.x = P.x + 1;
        P.tab[P.y][P.x] = 'P';
        P.tab[P.y][P.x + 1] = 'X';
    }
    return P;
}
