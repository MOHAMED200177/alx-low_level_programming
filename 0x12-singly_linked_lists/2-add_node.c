#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */


list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;

if (!head || !str)
return (NULL);

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
return (NULL);
}

newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;

return (newNode);
}
