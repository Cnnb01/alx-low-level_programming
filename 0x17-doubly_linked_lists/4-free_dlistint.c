#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * This function frees each node in the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temphead = head;
	while (temphead != NULL)
	{
		dlistint_t *nexttemp = temphead->next;
		free(temphead);
		temphead = nexttemp;
	}		    
}
