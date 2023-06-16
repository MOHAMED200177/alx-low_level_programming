#include <stdio.h>

/**
* main - Entry point
*
* description: print a to z then A to Z
*
* Return: 0 (Success)
*
*/

int main(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
char A = 'A';
while (A <= 'Z')
{
putchar(A);
a++;
}
putchar('\n');
return (0);
}
