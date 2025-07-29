#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: pointer to pointer of the head
 * @n: number to print
 *
 * Return: adress of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		node->n = n;
		node->prev = NULL;
		node->next = NULL;
		return (node);
	}

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	return (node);
}
