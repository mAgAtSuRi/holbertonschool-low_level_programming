#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	return (n);
}
