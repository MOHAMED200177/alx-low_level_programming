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
while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
