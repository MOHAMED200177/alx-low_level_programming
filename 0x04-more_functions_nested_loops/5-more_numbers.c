#include <stdio.h>
#include "main.h"

/**
* more_numbers -   prints the numbers, from 0 to 9,
*                   followed by a new line.
*
* Return: always 0 (success)
*/

void void more_numbers(void)
{
int a;
int n;
int v;
for (a = 1; a <= 10; a++)
{
for (n = 0; n <= 14; n++)
{
v = n;
if (n > 9)
{
_putchar (1 + 48);
v = n % 10;  
}
_putchar (n);
}
}
_putchar ('\n');
}
