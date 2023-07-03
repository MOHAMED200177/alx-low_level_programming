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
int i, j, k, l1 = 0, l2 = 0, sum = 0;
char tmp;
while (n1[l1])
l1++;
while (n2[l2])
l2++;
if (l1 > size_r || l2 > size_r)
return (0);
for (i = l1 - 1, j = l2 - 1, k = 0; i >= 0 || j >= 0 || sum; i--, j--, k++)
{
sum += (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
r[k] = sum % 10 + '0';
sum /= 10;
}
r[k] = '\0';
for (i = 0; i < k / 2; i++)
{
tmp = r[i];
r[i] = r[k - i - 1];
r[k - i - 1] = tmp;
}
return (r);
}