#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));

if (!newNode || !head)
return (NULL);

newNode->next = NULL ;
newNode->n = n;
if (*head)
newNode->next = *head;
*head = newNode;
return (newNode)
}
