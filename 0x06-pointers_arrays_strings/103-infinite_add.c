#include <stdio.h>


/**
 * infinite_add - Adds two numbers
 *
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0;
int j = 0;
int k = 0;
int l1 = strlen(n1);
int l2 = strlen(n2);
int sum = 0;
int carry = 0;

for (i = l1 - 1, j = l2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
sum = carry;

if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
r[k] = (sum % 10) + '0';
}

if (k > size_r)
return (0);

r[k] = '\0';

for (i = 0; i < k / 2; i++)
{
char tmp;

tmp = r[i];
r[i] = r[k - i - 1];
r[k - i - 1] = tmp;
}
