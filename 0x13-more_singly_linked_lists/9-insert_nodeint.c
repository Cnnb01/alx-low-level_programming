#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a
*given position in a linked list.
* @head: A pointer to the head of the linked list.
* @idx: The index at which to insert the new node.
* @n: The value to store in the new node.
*
* Return: If memory allocation fails or the index is invalid, return NULL.
*         Otherwise, return a pointer to the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/* Initialize the new node */
new_node->n = n;
if (idx == 0)
{
/* Insert at the beginning of the list */
new_node->next = *head;
*head = new_node;
return (new_node);								        }

temp = *head;
for (i = 0; temp != NULL && i < idx - 1; i++)
{
/* Traverse the list to the position before the desired index */
temp = temp->next;
}
if (temp == NULL)
{
/* Index is out of range; free the new node and return NULL */
free(new_node);
return (NULL);									    }
/* Insert the new node into the list */
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

