#include "lists.h"

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */


size_t print_list(const list_t *h)
{
size_t i = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", current->len, current->str);
i++;
current = current->next;
}
return (i);
}
