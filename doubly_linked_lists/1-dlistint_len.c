#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
		num++;
	return (num);
}
