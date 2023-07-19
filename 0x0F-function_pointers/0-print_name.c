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
f(name);
}

void print(char *name)
{
printf("%s\n", name);
}

int main()
{
char name[] = "John Doe";
print_name(name, print);
return (0);
}
