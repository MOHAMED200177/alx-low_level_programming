#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *@size: input
 *@c: input
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char *arr = NULL;
if (size == 0)
{
return (NULL);
}
arr = new char[size];
for (unsigned int i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
