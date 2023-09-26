#include "lists.h"
/**
*insert_nodeint_at_index - a function that inserts a new
*node at a given position.
*@head: Pointer to the pointer of the head node.
*@idx: the index
*@n: the integer data
*Return: Pointer to the new node or NULL on failure.
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temphead;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	temphead = *head;
	while (temphead != NULL)
	{
		count++;
		if (count != idx)
		{
			temphead = temphead->next;
		}
		else
		{
			newnode->next = temphead->next;
			temphead->next = newnode;
			newnode->n = n;
		}
	}
	return (newnode);
}
