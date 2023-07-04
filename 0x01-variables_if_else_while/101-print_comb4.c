#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0.
 */

int main(void)
{
int i = 0;
while (i < 1000)
{
if (i / 100 < (i / 10) % 10 && (i / 10) % 10 < i % 10)
{
putchar(i / 100 + '0');
putchar((i / 10) % 10 + '0');
putchar(i % 10 + '0');
if (i != 789)
{
putchar(',');
putchar(' ');
}
}
i++;
}
return (0);
}
