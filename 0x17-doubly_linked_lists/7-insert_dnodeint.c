#include "lists.h"
/**
 *insert_dnodeint_at_index - Inserts a new node at a given index.
 *@h: Pointer to the head of the doubly linked list.
 *@idx: Index at which the new node should be inserted.
 *@n: Value to be stored in the new node.
 * Return: Address of the new node if successful, NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temphead = *h;
	dlistint_t *pnewnode = malloc(sizeof(dlistint_t));

	if (pnewnode == NULL)
	{
		return (NULL);
	}
	pnewnode->n = n;
	pnewnode->next = NULL;
	pnewnode->prev = NULL;
	if (idx == 0)
	{
		pnewnode->next = temphead;
		if (temphead != NULL)
		{
			temphead->prev = pnewnode;
		}
		*h = pnewnode;
		return (pnewnode);
	}
	while (temphead != NULL)
	{
		if (count == idx - 1)
		{
			pnewnode->next = temphead->next;
			pnewnode->prev = temphead;
			temphead = pnewnode;
			return (pnewnode);
		}
		temphead = temphead->next;
		count++;
	}
	free(pnewnode);
	return (NULL);
}
