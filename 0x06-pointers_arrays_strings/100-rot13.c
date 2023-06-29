#include "main.h"
#include <stdio.h>

/**
 * rot13 - Write a function that encodes a string using rot13.
 *@s: input
 * Return: Always 0.
 */
char *rot13(char *s)
{
int i;
char rot13[] = "abcdefghijklmnopqrstyvwzyzABCDEFGHIJKLMNOPQRSTYVWXYZ";
char ROT13[] = "nopqrstyvwzyzabcdefghijklmNOPQRSTYVWXYZABCDEFGHIJKLM";
char *ptr = s;
while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == rot13[i])
{
*s = ROT13[i];
break;
}
}
s++;
}
return (ptr);
}
