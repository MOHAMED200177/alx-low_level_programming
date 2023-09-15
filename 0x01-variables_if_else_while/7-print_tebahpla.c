#include <stdio.h>

/**
* main - Entry point
*
* description: print z to a
*
* Return: 0 (Success)
*
*/

int main(void)
{
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
