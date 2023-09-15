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
char A = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
