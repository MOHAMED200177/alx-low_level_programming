#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse , followed by a new line.
 *@s: input
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
if (*s == '/0')
{
_putchar("\n");
return;
}
_puts_recursion(s + 1);
_putchar(*s);
}
