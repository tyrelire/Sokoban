/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/
#include "../include/my.h"


char *create_map(char *argv)
{
    struct stat ap;
    int i;
    i = open(argv, O_RDONLY);
    stat(argv, &ap);
    char *buff = malloc(sizeof(char) * (ap.st_size + 1));
    read(i, buff, ap.st_size);
    buff[ap.st_size] = '\0';
    return buff;
}

p_t find_p(p_t P)
{
    P.y = 0, P.x = 0;
    for (int i = 0; P.tab[i] != NULL; i++) {
        for (int j = 0; P.tab[i][j] != '\0'; j++) {
            P = help_p(P, i, j);
        }
    }
    return P;
}

p_t help_p(p_t P, int i, int j)
{
    if (P.tab[i][j] == 'P') {
        P.y = i;
        P.x = j;
    }
    return P;
}

p_t find_o(p_t P)
{
    int y = 0; int x = 0; P.cpt = 0;
    while (P.tab2[y] != NULL) {
        while (P.tab2[y][x] != '\0') {
            (P.tab2[y][x] == 'O' && P.tab[y][x] == ' ') ?
                P.cpt = P.cpt + 1,
                P.tab[y][x] = 'O' : 0;
            x++;
        }
        x = 0;
        y++;
    }
    return P;
}

p_t move_p(p_t P)
{
    int c = getch();
    switch (c) {
        case 'A':
            P = my_up(P);
            break;
        case 'B':
            P = my_down(P);
            break;
        case 'D':
            P = my_left(P);
            break;
        case 'C':
            P = my_right(P);
            break;
    }
    return P;
}

void victory(p_t P) {
    for (int i = 0; P.tab[i] != NULL; i++) {
        for (int j = 0; P.tab[i][j] != '\0'; j++) {
            if (P.tab[i][j] == 'O' && P.tab2[i][j] != 'X') {
                return;
            }
        }
    }
    printf("Victoire !\n");
    exit(0);
}

void defeat(p_t P) {
    int height = 0;
    while (P.tab[height] != NULL) height++;

    for (int i = 0; i < height; i++) {
        for (int j = 0; P.tab[i][j] != '\0'; j++) {
            if (P.tab[i][j] == 'X' && (
                (P.tab[i+1][j] == '#' || P.tab[i+1][j] == 'X') && (P.tab[i][j+1] == '#' || P.tab[i][j+1] == 'X') ||
                (P.tab[i+1][j] == '#' || P.tab[i+1][j] == 'X') && (P.tab[i][j-1] == '#' || P.tab[i][j-1] == 'X') ||
                (P.tab[i-1][j] == '#' || P.tab[i-1][j] == 'X') && (P.tab[i][j+1] == '#' || P.tab[i][j+1] == 'X') ||
                (P.tab[i-1][j] == '#' || P.tab[i-1][j] == 'X') && (P.tab[i][j-1] == '#' || P.tab[i][j-1] == 'X'))) {
                printf("Défaite !\n");
                exit(0);
            }
        }
    }
}

int main(int argc, char **argv)
{
    int pouf = open(argv[argc - 1], O_RDONLY);

    if (argc < 2) {
        return 84;
    } if (argv[1][0] == '-') {
        help_h(argv);
    } if (pouf == -1) {
        return 84;
    } else {
        p_t P;
        char *buff = create_map(argv[1]);
        P.tab = str_to_word_array(buff);
        P.tab2 = str_to_word_array(buff);
        initscr();
        noecho();
        curs_set(0);
        P = find_p(P);
        while (1) {
            clear();
            my_tab(P.tab);
            refresh();
            P = move_p(P);
            P = find_o(P);
            victory(P);
            defeat(P);
        }
        endwin();
    }
    return 0;
}
