#include <stdio.h>

/**
* main - Entry point
*
* description: print 0 to 9
*
* Return: 0 (Success)
*
*/

int main(void)
{
int a;
for (a = 0 ; a < 10 ; a++)
if (a != 9)
putchar("%d", a);
putchar (",");
putchar (" ");
putchar("\n");
return (0);
}
