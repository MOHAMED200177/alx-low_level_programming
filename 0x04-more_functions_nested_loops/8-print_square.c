#include <stdio.h>
#include "main.h"

/**
* print_square  -    prints a square, followed by a new line.
* @size: is the size of the square
* Return: always 0 (success)
*/

void print_square(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
