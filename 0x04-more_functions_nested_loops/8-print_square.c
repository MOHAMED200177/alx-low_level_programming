#include <stdio.h>
#include "main.h"

/**
* print_square  -    prints a square, followed by a new line.
* @size: is the size of the square
* Return: always 0 (success)
*/

void print_square(int size);
{
int r;
int c;
for (r = 1; r <= size; r++)
{
for (c = 1; c <= size; c++)
_putchar (35);
_putchar ('\n');
}
}
