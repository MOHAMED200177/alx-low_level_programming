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
int i = 0;
int j = strlen(s) - 1;
char temp;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
