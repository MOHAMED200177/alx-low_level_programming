#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++
}
return (dest);
}
