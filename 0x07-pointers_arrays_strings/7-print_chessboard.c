#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Write a function that prints the chessboard.
 *@a: input
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int  i;
for (i = 0; i <= 8; i++)
{
_putchar(a[i]);
_putchar('\n');
}
}
