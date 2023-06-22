#include "main.h"

/**
* print_diagonal -   draws a diagonal line on the terminal.
* @n : input
* Return: always 0 (success)
*/

void print_diagonal(int n)
{
int a;
int c;
if (n <= 0)
_putchar ('\n');
else
{
for (a = 1; a <= n; a++)
{
for (c = 1; c <= a; c++)
_putchar (' ');
_putchar (92);/*is equal to '/' char*/
_putchar ('\n');
}
}
}
