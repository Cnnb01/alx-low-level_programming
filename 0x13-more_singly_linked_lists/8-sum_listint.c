#include "lists.h"
/**
*sum_listint - a function that returns the sum of all the data
*(n) of a listint_t linked list
*@head: Pointer to the pointer of the head node.
*Return: returns 0 if empty or sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}

