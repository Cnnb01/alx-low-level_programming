#include "lists.h"
/**
*free_listint - a function that frees a listint_t lisi
*@head: Pointer to the pointer of the head node.
*/
void free_listint(listint_t *head)
{
listint_t *previous;
while (head != NULL)
{
previous = head;
head = head->next;
free(previous);
}
}
