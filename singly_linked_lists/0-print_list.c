#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @list_t: list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i, nodes = 0;

	while (h->next != NULL)
	{
		printf("%s\n", h->str);
		nodes++;
	}
	return (nodes);
}
