#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	while(head != NULL)
	{
		free(head);
		head = head->next;
	}
}
