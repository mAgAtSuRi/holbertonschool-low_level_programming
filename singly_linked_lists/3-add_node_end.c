#include "lists.h"

/**
 * add_node_end - add a new node at the end of the list
 * @head: pointer to the poitner of the head
 * @str: string to add
 *
 * Return: adress of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *h = *head;
	list_t *node = malloc(sizeof(list_t));
	
	if (node == NULL)
		return (NULL);
	while (str[i])
		i++;

	if (*head == NULL)
		*head = node;
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = node;
	}

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	return (node);
}
