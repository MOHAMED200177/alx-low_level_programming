#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */


void free_list(list_t *head)
{
list_t *newNode;

while (head != NULL)
{
newNode = head;
head = head->next;
free(newNode->str);
free(newNode);
}
}
