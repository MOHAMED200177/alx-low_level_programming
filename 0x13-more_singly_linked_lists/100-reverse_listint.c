#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp = NULL, *next = NULL;

if (!head || !*head)
return (NULL);

temp = *head;
*head = NULL;
while (temp)
{
next = temp->next;
temp->next = *head;
*head = temp;
temp = next;
}
return (*head);
}
