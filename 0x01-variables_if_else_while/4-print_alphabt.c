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
char a = 'a';
while (a <= 'z')
{
if(a == 'q' || a == 'e')
a++;
putchar(a);
a++;
}
putchar('\n');
return (0);
}
