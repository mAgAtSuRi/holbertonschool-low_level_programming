#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to the head pointer
 * @n: number to store in the node
 *
 * Return: adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}

	return (node);
}
