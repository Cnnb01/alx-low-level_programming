#include "lists.h"
/**
*free_listint2 - a function that frees a listint_t list
*@head: Pointer to the pointer of the head node.
*/
void free_listint2(listint_t **head)
{
listint_t *previous;
listint_t *next;
if (head == NULL)
{
return;
}
previous = *head;
while (previous != NULL)
{
next = previous->next;
free(previous);
previous = next;
}
*head = NULL;
}
