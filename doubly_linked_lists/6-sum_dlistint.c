#include "lists.h"

/**
 * sum_dlistint - return the sum of data in a list
 * @head: pointer to the head of the list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
