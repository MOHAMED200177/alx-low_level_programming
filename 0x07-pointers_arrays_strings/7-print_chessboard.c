#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Write a function that prints the chessboard.
 *@a: input
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int  i, l;
for (i = 0; i < 8; i++)
{
for (l = 0; l < 8; l++)
{
_putchar(a[i][l]);
}
_putchar('\n');
}
}
