#include <stdio.h>
#include "main.h"

/**
* print_numbers -   prints the numbers, from 0 to 9,
*                   followed by a new line.
*
* Return: always 0 (success)
*/

void print_numbers(void)
{
int a = 0;
for (a = 0; a < 10; a++)
_putchar (a + 48);
_putchar ('\n');
}
