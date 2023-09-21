#include "lists.h"
/**
*add_node - Add a new node at the beginning of a list_t list.
* @head: A pointer to a pointer to the head of the list.
* @str: The string to add as the new node's str member.
*
* Return: A pointer to the new node, or NULL if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *pnewnode = malloc(sizeof(list_t));
if (pnewnode == NULL)
{
return (NULL);
}
pnewnode->str = strdup(str);
if (pnewnode->str == NULL)
{
free(pnewnode);
return (NULL);
}
pnewnode->len = strlen(str);
pnewnode->next = *head;
*head = pnewnode;
return (pnewnode);
}
