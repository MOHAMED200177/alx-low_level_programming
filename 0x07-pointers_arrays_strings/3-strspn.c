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
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
return (i);
}
}
return (i);
}
