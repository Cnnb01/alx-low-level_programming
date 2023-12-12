#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all data in the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum1 = 0;
	dlistint_t *temphead = head;

	while (temphead != NULL)
	{
		unsigned int data = temphead->n;

		sum1 = sum1 + data;
		temphead = temphead->next;
	}
	return (sum1);
}
