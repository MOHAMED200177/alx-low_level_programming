#include "main.h"
#include <stdio.h>

/**
 * _strchr - Write a function that locates a character in a string.
 *@s: input
 *@c: input
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
