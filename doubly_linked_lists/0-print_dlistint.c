#include "lists.h"

/**
 * print_dlistint - print all elements of a double list
 * @h: pointer to the head of the list
 * 
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;
	while(h != NULL)
	{
		printf("%d", h->n);
		num++;
		h = h->next;
	}
	return (num);
}