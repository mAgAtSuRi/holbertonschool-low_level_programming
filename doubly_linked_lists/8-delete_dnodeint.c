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
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (temp != NULL && pos < index)
	{
		temp = temp->next;
		pos++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->prev == NULL)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
	}
	else if (temp->next == NULL)
		temp->prev->next = NULL;
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
