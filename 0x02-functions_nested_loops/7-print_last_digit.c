#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
*@n: takes number input
*Return: last_digit
*/
int print_last_digit(int n)
{
int la;
if (n > 0)
n = (-1) * (n % 10);
else
n = n % 10;
_putchar(la + '0');
return (la);
}
