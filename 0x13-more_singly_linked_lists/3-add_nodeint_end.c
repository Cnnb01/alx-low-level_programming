#include "lists.h"
/**
*add_nodeint_end - a function that adds a new node at the end of a list.
*@head: Pointer to the pointer of the head node.
*@n: Value to be stored in the new node.
*Return: Pointer to the last node  of the list.*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *newhead;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = newnode;
newnode->n = n;
newnode->next = NULL;
}
else
{
newhead = *head;
while (newhead->next != NULL)
{
newhead = newhead->next;
}
newhead->next = newnode;
newnode->n = n;
newnode->next = NULL;
}
return (newnode);
}

