#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses a string.
 * @s: input
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i, h;
char t;
for (i = 0; s[i] != '\0'; ++i)
;
for (l = 0; l < i / 2; l++)
{
t = s[l];
s[l] = s[i - 1 - l];
s[i - 1 - l] = t;
}
}
