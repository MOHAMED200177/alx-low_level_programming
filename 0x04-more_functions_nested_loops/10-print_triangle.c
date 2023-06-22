#include <stdio.h>
#include "main.h"

/**
* print_triangle  -    prints a triangle, followed by a new line.
*@size : input size of the triangle
* Return: always 0 (success)
*/

void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
return;
}
for (int i = 1; i <= size; i++)
{
for (int j = 1; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
