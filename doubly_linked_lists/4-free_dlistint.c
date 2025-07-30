#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
