#include <stdio.h>

/**
* main - Entry point
*
* description: print a to z
*
* Return: 0 (Success)
*
*/

int main(void)
{
int a = 0;
while (a <= 9)
{
putchar(a + 48);
if (a != 9)
putchar(',');
putchar(' ');
}
a++;
putchar('\n');
return (0);
}
