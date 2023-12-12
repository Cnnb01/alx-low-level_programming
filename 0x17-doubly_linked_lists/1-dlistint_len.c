#include "lists.h"
/**
*dlistint_len - returns number of elements of a doubly linked list
*@h: A pointer to the head of the list
*Return: The number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *pcurrent = h;

	while (pcurrent != NULL)
	{
		pcurrent = pcurrent->next;
		count++;
	}
	return (count);
}
