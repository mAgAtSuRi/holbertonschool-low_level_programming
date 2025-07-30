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
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t **p_temp;
	dlistint_t *p_prev;
	unsigned int pos = 0;

	if (node == NULL)
		return (NULL);

	node->n = n;
	p_temp = h;
	while (*p_temp != NULL)
	{
		p_prev = *p_temp;
		if (pos == idx)
		{
			p_prev->next = node;
			if ((*p_temp)->next == NULL && (*p_temp)->prev != NULL)
				add_dnodeint_end(p_temp, n);
			else
				add_dnodeint(p_temp, n);
			return (node);
		}
		else
		{
			pos++;
			*p_temp = (*p_temp)->next;
		}
	}
	return (NULL);
}
