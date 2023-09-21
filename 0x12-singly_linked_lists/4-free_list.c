#include "lists.h"
/**
*free_list - Frees a list_t list.
* @head: A pointer to the head of the list.
*/
void free_list(list_t *head)
{
list_t *pcurrent = head;
list_t *next;
while (pcurrent != NULL)
{
next = pcurrent->next;
free(pcurrent->str);
free(pcurrent);
pcurrent = next;
}
}
