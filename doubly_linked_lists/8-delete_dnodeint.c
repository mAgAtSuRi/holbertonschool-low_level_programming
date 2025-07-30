#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: pointer to the pointer of the head
 * @index: index of the node to delete
 * 
 * Return: 1 if succeded else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;

	while (*head != NULL && pos != index)
		*head = (*head)->next;

	if (*head == NULL)
		return (-1);
	
	(*head)->prev->next = (*head)->next->prev;
	(*head)->next->prev = (*head)->prev->next;
	free(*head);
	return (1);
}
