#include "main.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: input
 * @src: input
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int o = 0;
while (dest[i] != '\0')
i++;
while (src[o] != '\0')
{
dest[i] = src[o];
i++;
o++;
}
dest[i] = '\0';
return (dest);
}
