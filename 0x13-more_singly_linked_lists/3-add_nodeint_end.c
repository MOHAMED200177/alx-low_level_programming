#include "lists.h"

/**
 * add_nodeint_end - adds a node to the bottom
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
listint_t *temp;

if (!head || !newNode)
return (NULL);

newNode->next = NULL;
newNode->n = n;

if (!*head)
*head = newNode;
else
{
temp =*head;
while (temp->next)
temp =temp->next;
temp->next = newNode;
}
return (newNode);
}
