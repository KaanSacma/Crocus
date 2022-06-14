/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <stdio.h>

void print_five(int i, char c)
{
    char *five[] = {"00000", "0    ", "0000 ", "    0", "0000 "};

    for (int j = 0; five[i][j] != '\0'; j += 1) {
        if (five[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", five[i][j]);
    }
}

void print_six(int i, char c)
{
    char *six[] = {" 000 ", "0    ", "0000 ", "0   0", " 000 "};

    for (int j = 0; six[i][j] != '\0'; j += 1) {
        if (six[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", six[i][j]);
    }
}

void print_seven(int i, char c)
{
    char *seven[] = {"00000", "    0", "   0 ", "  0  ", " 0   "};

    for (int j = 0; seven[i][j] != '\0'; j += 1) {
        if (seven[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", seven[i][j]);
    }
}

void print_eight(int i, char c)
{
    char *eight[] = {" 000 ", "0   0", " 000 ", "0   0", " 000 "};

    for (int j = 0; eight[i][j] != '\0'; j += 1) {
        if (eight[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", eight[i][j]);
    }
}

void print_nine(int i, char c)
{
    char *nine[] = {" 000 ", "0   0", " 0000", "    0", " 000 "};

    for (int j = 0; nine[i][j] != '\0'; j += 1) {
        if (nine[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", nine[i][j]);
    }
}
