#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 *
 * Return: 0
 */
int main(void)
{
int counter;
unsigned long a = 1;
unsigned long b = 1;
unsigned long sum = 0;
long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

printf("1");
for (counter = 2; counter <= 98; counter++)
sum = a + b;
a = b;
b = sum;

if (sum > 999999999)
{
sum_head = sum / 1000000000;
sum_tail = sum % 1000000000;
b_head = b / 1000000000;
b_tail = b % 1000000000;

printf(", %ld%09ld", (long)(sum_head + b_head), (long)(sum_tail + b_tail));
}
else
printf(", %lu", sum);
}
printf("\n");

return (0);
}
