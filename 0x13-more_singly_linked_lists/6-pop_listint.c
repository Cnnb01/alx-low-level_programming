#include "lists.h"
/**
*pop_listint - a function that deletes the head node of a listint_t
*linked list.
*@head: Pointer to the pointer of the head node.
*Return: returns the head node’s data (n) or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
/*store address of node*/
listint_t *addrstore;
/*store data of node*/
int datastore;

if (*head == NULL || head == NULL)
{
return (0);
}
/*dest-store*/
addrstore = *head;
datastore = addrstore->n;
(*head) = (*head)->next;
free(addrstore);
return (datastore);
}
