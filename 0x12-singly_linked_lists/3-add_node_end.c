#include "lists.h"
/**
*add_node_end - adds a new node at the end of a list
* @head: A pointer to a pointer to the head of the list.
* @str: The string to add as the new node's str member.
*
* Return: A pointer to the new node, or NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *plast = malloc(sizeof(list_t));
list_t *temp = *head;
if (plast == NULL)
{
return (NULL);
}
plast->str = strdup(str);
if (plast->str == NULL)
{
free(plast);
return (NULL);
}
plast->len = strlen(str);
plast->next = NULL;
if (*head == NULL)
{
*head = plast;
return (plast);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = plast;
return (plast);
}
