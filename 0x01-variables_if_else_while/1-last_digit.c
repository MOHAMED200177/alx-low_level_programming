#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* description: print the value and of n
*
* Return: 0 (Success)
*
*/

int main(void)
{
int n. digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (d > 5)
printf("Last digit of %d is %d and is greater than 5 \n", n,  d);
else if (d == 0)
printf("Last digit of %d is %D and is 0 \n", n,  d);
else if (d < 6 && d != 0)
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n,  d);
return (0);
}
