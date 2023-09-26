#include "lists.h"
/**
* delete_nodeint_at_index - Deletes the node at a
*given position in a linked list.
* @head: A pointer to a pointer to the head node.
* @index: The position of the node to delete.
*
* Return: 1 if successful, -1 if the node
*at the index does not exist or other errors.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temphead, *prevnode;
unsigned int count = 0;
/* Check if head or *head is NULL */
if (head == NULL || *head == NULL)
	return (-1);

/* Handle the case of deleting the first node (index == 0) */
if (index == 0)
{
	temphead = *head;
	*head = temphead->next;
	free(temphead);
	return (1);
}
	temphead = *head;
	prevnode = NULL;

/* Traverse the list to find the node to delete */
while (temphead != NULL)
{
	if (count == index)
	{
/* Adjust pointers and free the node */
		if (prevnode != NULL)
		prevnode->next = temphead->next;
		free(temphead);
		return (1);

	}
	prevnode = temphead;
	temphead = temphead->next;
	count++;										    }

	/* Return -1 when the index is out of range */
	return (-1);
}

