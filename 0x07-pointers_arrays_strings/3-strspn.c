#include "main.h"
#include <stdio.h>

/**
 *  _strspn  - Write a function that locates a character in a string.
 *@s: input
 *@accept: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, l;
for (i = o; s[i] != '\0'; i++)
{
for (l = o; accept[l] != s[i]; l++)
{
if (accept[l] == '\0')
return (i);
}
}
return (i);
}
