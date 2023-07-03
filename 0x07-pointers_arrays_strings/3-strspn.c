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
int i;
int l;
for (i = o; s[i] != '\0'; i++)
{
for (l = o; accept[l] != '\0'; l++)
{
if (s[i] == accept[l])
{
break;
}
}
if (s[i] == '\0')
{
return (i);
}
}
return (i);
}
