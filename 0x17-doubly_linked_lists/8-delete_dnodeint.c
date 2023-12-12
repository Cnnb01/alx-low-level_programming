#include "lists.h"
/**
 *delete_dnodeint_at_index - Deletes the node at a given index..
 *@head: Pointer to the head of the doubly linked list.
 *@index: Index of the node to delete.
 * Return: 1 if successful, 0 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temphead = *head;

	if (temphead == NULL)
	{
		return (0);
	}
	if (index == 0)
	{
		*head = temphead->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}
	while (temphead != NULL)
	{
		if (count == index)
		{
			if (temphead->prev != NULL)
			{
				temphead->prev->next = temphead->next;
			}
			if (temphead->next != NULL)
			{
				temphead->next->prev = temphead->prev;
			}
		}
		temphead = temphead->next;
		count++;
	}
	return (0);
}
