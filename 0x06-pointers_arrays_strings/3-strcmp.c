#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: input
 * @s2: input
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
