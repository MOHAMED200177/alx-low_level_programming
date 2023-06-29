#include "main.h"
#include <stdio.h>

/**
 * isLower - reverses the content of an array of integers.
 *@c: input
 * Return: 1 if true , 0 if false
 */

int isLower(char c)
{
return (c >= 97 && c <= 122);
}


/**
 * isDelimiters - reverses the content of an array of integers.
 *@c: input
 *Return: 1 if true , 0 if false
 */
char isDelimiters(char c)
{
int i;
char delimiter[] = "\t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}


/**
 * cap_string -Write a function that capitalizes all words of a string.
 *@s: input
 * Return: Always 0.
 */
char *cap_string(char *s)
{
char  *ptr = s;
int f = 1;
while (*s)
{
if (isDelimiters(*s))
f = 1;
else if (isLower(*s) && f)
{
*s -= 32;
f = 0;
}
else
f = 0;
s++;
}
return (ptr);
}

