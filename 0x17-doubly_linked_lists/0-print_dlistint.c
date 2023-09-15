/*
 * 0x17. C - Doubly linked lists
 * task 0
 */
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to dlistint_t head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
<<<<<<< HEAD
}
=======
}
>>>>>>> b3c13837296d0f76d35ef1a3e4d0d6f9054a175d
