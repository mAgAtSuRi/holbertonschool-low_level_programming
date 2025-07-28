#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @head: pointer of pointer of the head list
 * @str: string to add in the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[i])
		i++;
	node->str = strdup(str);
	node->len = i;
	node->next = *head;
	*head = node;
	
	return (node);
}
