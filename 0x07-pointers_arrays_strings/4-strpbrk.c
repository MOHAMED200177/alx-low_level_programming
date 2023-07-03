#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -Write a function that searches a string for any of a set of bytes.
 *@s: input
 *@accept: input
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char h;
i = 0;
while (s[i] !=  '\0')
{
l = 0;
while (accept[l] !=  '\0')
{
if (accept[l] == s[i])
{
h = &s[i];
return (h);
}
l++;
}
i++;
}
return (0);
}
