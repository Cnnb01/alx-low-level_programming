#include "lists.h"
/**
*add_nodeint - Add a new node at the beginning of a linked list.
*@head: Pointer to the pointer of the head node.
*@n: Value to be stored in the new node.
*Return: Pointer to the new head of the list.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
free(newnode);
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
