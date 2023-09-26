#include "lists.h"
/**
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
	while(temphead != NULL)
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
