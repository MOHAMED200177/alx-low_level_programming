#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -   onvert a string to an integer.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int sum;
int c;
srand(time(NULL));
while (sum <= 2645)
{
c = rand() % 128;
SUM += c;
putchar(c);
}
putchar(2772 - sum);
}
