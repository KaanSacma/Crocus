/*
** EPITECH PROJECT, 2022
** file
** File description:
** nb
*/

#include <stdio.h>

void print_zero(int i, char c)
{
    char *zero[] = {" 000 ", "0   0", "0   0", "0   0", " 000 "};

    for (int j = 0; zero[i][j] != '\0'; j += 1) {
        if (zero[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", zero[i][j]);
    }
}

void print_one(int i, char c)
{
    char *one[] = {" 000 ", "0 00 ", "  00 ", "  00 ", " 0000"};

    for (int j = 0; one[i][j] != '\0'; j += 1) {
        if (one[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", one[i][j]);
    }
}

void print_two(int i, char c)
{
    char *two[] = {" 000 ", "0   0", "   0 ", " 0   ", "00000"};

    for (int j = 0; two[i][j] != '\0'; j += 1) {
        if (two[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", two[i][j]);
    }
}

void print_three(int i, char c)
{
    char *three[] = {"0000 ", "    0", " 000 ", "    0", "0000 "};

    for (int j = 0; three[i][j] != '\0'; j += 1) {
        if (three[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", three[i][j]);
    }
}

void print_four(int i, char c)
{
    char *four[] = {"  00 ", " 0 0 ", "0  0 ", "00000", "   0 "};

    for (int j = 0; four[i][j] != '\0'; j += 1) {
        if (four[i][j] == '0')
            printf("%c", c);
        else
            printf("%c", four[i][j]);
    }
}
