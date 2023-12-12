#include "lists.h"
/**
 *print_dlistint - Print all the elements of a doubly linked list
 *@h: A pointer to the head of the list
 *Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *pcurrent = h;

	while (pcurrent != NULL)
	{
		printf("%d", pcurrent->n);
		pcurrent = pcurrent->next;
		count++;
	}
	printf("\n");
	return (count);
}
