#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - returns the sum of all its parameters.
 * @n: input
 * @separator: input
 *
* Return: 0 (success)
 */



void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
