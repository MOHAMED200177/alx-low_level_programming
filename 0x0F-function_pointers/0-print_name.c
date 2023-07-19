#include <stdio.h>
#include "function_pointers.h"



/**
 * print_name - prints a name.
 * @name: input
 * @f: input
 *
* Return: always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name)
}

