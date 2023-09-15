#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: input
 * @b: input
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int v = *a;
*a = *b;
*b = v;
}
