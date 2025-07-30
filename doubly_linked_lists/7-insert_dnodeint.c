#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at specific index
 * @h: pointer of head pointer
 * @idx: index to insert the node
 * @n: number to put in the new node
 *
 * Return: the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int pos = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && pos < idx - 1)
	{
		temp = temp->next;
		pos++;
	}
	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));


	node->n = n;
	node->prev = temp;
	node->next = temp->next;
	temp->next->prev = node;
	temp->next = node;

	return (node);
}
