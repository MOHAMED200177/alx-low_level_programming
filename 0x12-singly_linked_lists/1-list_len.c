#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
const list_t *newnode = h;

while (newnode != NULL)
{
i++;
newnode = newnode->next;
}

return (i);
}
