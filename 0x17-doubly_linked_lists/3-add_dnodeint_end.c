#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the new node if successful, NULL otherwise.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		dlistint_t *temp_head = *head;

		while (temp_head->next != NULL)
		{
			temp_head = temp_head->next;
		}
		temp_head->next = pnewnode;
		pnewnode->prev = temp_head;
	}
	return (pnewnode);
	free(pnewnode);
}
