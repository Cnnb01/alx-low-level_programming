#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the node at a given index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temphead = head;
	while (temphead != NULL)
	{
		if (count == index)
		{
			return (temphead);
		}
		temphead = temphead->next;
		count++;
	}    
	return (NULL);
}
