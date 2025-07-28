#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to first node of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
