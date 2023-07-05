#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *@n: input
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursion(n / 2) * 2 == n ? _sqrt_recursion(n / 2) : -1);
}
