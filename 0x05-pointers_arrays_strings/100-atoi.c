#include "main.h"
#include <stdio.h>
/**
 * _atoi -   onvert a string to an integer.
 *
 * @s: input
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
unsigned int sum = 0;
int sign = 1;
do
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
sum = (sum * 10) + (*s - '0');
else if (sum > 0)
break;
while
(*s++);
return (sum *sign);
}
