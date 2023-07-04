#include <stdio.h>

/**
 * print_times_table -Write a function that prints
 *the n times table, starting with 0.
 *
 * @n: The buffer to print
 */

void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
putchar('0');
else
printf("%3d", i * j);
if (j != n)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
