#include "lists.h"

/**
 * get_dnodeint_at_index - return a node of a position
 * @head: pointer to the head of the list
 * index: position of the node to return
 * 
 * Return: pointer to the specific node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (n == 0)
		return (head);

	while (n != index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
