#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *@a: input
 *@size: input
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
int i, s = 0, ss = 0;
for (i = 0; i < size; i++)
{
s += *(a + i * size + i);
ss += *(a + i * size + (size - i - 1));
}
printf("Sum of diagonal 1: %d\n", s);
printf("Sum of diagonal 2: %d\n", ss);
}
