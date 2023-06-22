#include <stdio.h>
#include "main.h"

/**
* more_numbers -   draws a straight line in the terminal.
* @n : input
* Return: always 0 (success)
*/

void print_line(int n)
{
int a;
if (n > 0)
{
_putchar ('\n');
}
else
for (a = 1; a <= n; a++)
{
_putchar (95);
}
_putchar ('\n');
}
