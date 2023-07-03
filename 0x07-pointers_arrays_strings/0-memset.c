#include "main.h"
#include <stdio.h>

/**
 * _memset - Write a function that fills memory with a constant byte.
 *@s: input
 *@b: input
 *@n: input
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
