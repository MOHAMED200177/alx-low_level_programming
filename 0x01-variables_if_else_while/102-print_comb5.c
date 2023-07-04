#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0.
 */

int main(void)
{
int i = 0;
while (i < 10000)
{
if (i / 100 < i % 100)
{
putchar(i / 100 / 10 + '0');
putchar(i / 100 % 10 + '0');
putchar(' ');
putchar(i % 100 / 10 + '0');
putchar(i % 100 % 10 + '0');
if (i != 9899)
{
putchar(',');
putchar(' ');
}
}
i++;
}
return (0);
}
