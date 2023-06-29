#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int o = 0;
while (dest[i] != '\0')
i++;
while (src[o] != '\0' && o < n)
{
dest[i] = src[o];
i++;
o++;
}
dest[i] = '\0';
return (dest);
}
