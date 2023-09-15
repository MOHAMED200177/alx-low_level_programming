#include "main.h"

/**
* times_table - print the 9 times_table
*example table
*0,  0,  0,  0,  0,  0,....
*0,  1,  2,  3,  4,  5,....
*/
void times_table(void)
{
int n;
int m;
int r;
for (n = 0; n <= 9; n++)
{
_putchar (48);
for (m = 1; m <= 9; m++)
{
_putchar (',');
_putchar (' ');
r = n * m;
if (r <= 9)
_putchar (' ');
else
_putchar ((r / 10) + 48);
_putchar ((r % 10) + 48);
}
_putchar ('\n');
}
}
