#include "main.h"
#include <stdio.h>

/**
 * print_array -   prints n elements of an array of integers,
 * followed by a new line.
 * @a: input
 * @n: input
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
_putchar("%d, ", a[i]);
else
_putchar("%d", a[i]);
}
_putchar('\n');
}
