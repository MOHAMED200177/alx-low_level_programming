#include <stdio.h>


/**
 * print_opcodes - prints the opcodes of its own main function
 * @n: input
 *
* Return: 0 (success)
 */



void print_opcodes(int n)
{
char *p = (char *)print_opcodes;
for (int i = 0; i < n; i++)
{
printf("%02hhx ", p[i]);
}
printf("\n");
}


/**
 * main -  prints the opcodes of its own main function.
 * @argc: input
 * @argv: input
 *
* Return: 0 (success)
 */

int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
return (2);
}
print_opcodes(n);
return (0);
}
