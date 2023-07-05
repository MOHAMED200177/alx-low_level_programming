#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -returns 1 if the input integer is a prime number, 
 * otherwise return 0.
 *@n: input
 * Return: Always 0.
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
if (n % 2 == 0)
return (0);
return (is_prime_helper(n, 3));
}

int is_prime_helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 2));
}

