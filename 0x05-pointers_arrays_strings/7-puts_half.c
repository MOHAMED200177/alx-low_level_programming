#include "main.h"
#include <stdio.h>

/**
 * puts2 -   prints half of a string, followed by a new line.
 * @str: input
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
;
for (i /= 2; str[i] != '\0'; ++i)
{
_putchar(str[i]);
}
_putchar('\n');
}
