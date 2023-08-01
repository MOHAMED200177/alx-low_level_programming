#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h);
{
size_t a = 0;
const listint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
a++
}
return (a);
}
