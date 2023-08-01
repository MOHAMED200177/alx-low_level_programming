#include "lists.h"

/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
size_t a = 0;

while (h != NULL)
h = h->next;
a++;
}

return (a);
}
