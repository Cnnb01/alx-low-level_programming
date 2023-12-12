#include "lists.h"
/**
 *add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data to be added to the new node.
 *
 *Return: A pointer to the newly added node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *pnewnode = malloc(sizeof(dlistint_t));

	if (pnewnode == NULL)
	{
		return (NULL);
	}

	pnewnode->n = n;
	pnewnode->next = NULL;
	pnewnode->prev = NULL;
	if (*head == NULL)
	{
		*head = pnewnode;
	}
	else
	{
		pnewnode->next = *head;
		(*head)->prev = pnewnode;
		*head = pnewnode;
	}
	return (pnewnode);
	free(pnewnode);
}
