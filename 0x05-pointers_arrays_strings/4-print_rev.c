#include "main.h"
#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 *
 * @s: input
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (i--)
{
putchar(s[i]);
}
putchar('\n');
}
