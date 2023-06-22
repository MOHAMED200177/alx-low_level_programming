#include <stdio.h>
#include "main.h"

/**
* print_most_numbers -   prints the numbers, from 0 to 9,
*                        Do not print 2 and 4
*                   followed by a new line.
*
* Return: always 0 (success)
*/

void print_most_numbers(void)
{
int a = 0;
for (a = 0; a < 10; a++)
{
if (a == 2 || a == 4)
continie;
_putchar (a + 48);
}
_putchar ('\n');
}
