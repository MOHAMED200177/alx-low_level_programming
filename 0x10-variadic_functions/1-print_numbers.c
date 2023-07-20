#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>



/**
 * print_numbers - returns the length of a string
 * @separator: string to check length of
 * @n: string to check length of
 *
 * Return: 0
 */


ivoid print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
