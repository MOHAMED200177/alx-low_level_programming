#include <stdio.h>

/**
 * main -Write a program that prints all possible different
 * combinations of two digits.
 * Return: Always 0.
 */

int main(void)
{
int i = 0;
int j;

while (i < 100)
{
j = i + 1;
while (j < 100)
{
putchar(i / 10 + '0');
putchar((i % 10 + '0') + ' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98 || j != 99)
{
putchar(',' + ' ');
}
j++;
}
i++;
}
return (0);
}
