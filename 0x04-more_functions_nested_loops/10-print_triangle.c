#include <stdio.h>
#include "main.h"

/**
* print_triangle  -    prints a triangle, followed by a new line.
*@size : input size of the triangle
* Return: always 0 (success)
*/

void print_triangle(int size)
{
int i. j;
if (size <= 0)
{
putchar('\n');
return;
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((i + j) <= size)
putchar(' ');
else
putchar('#');
}
putchar('\n');
}
}
}
