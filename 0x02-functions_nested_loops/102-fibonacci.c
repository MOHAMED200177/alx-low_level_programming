#include <stdio.h>

/**
 * main -   prints the first 50 Fibonacci
 * numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: alwys 0
 */

#include <stdio.h>

int main(void)
{
int i;
long int a = 1, b = 2, c;

printf("%ld, %ld", a, b);
for (i = 3; i <= 50; i++)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
}
putchar('\n');
return (0);
}

