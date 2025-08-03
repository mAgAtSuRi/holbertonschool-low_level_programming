#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int n = 0;

	while (n < ht->size)
	{
		while (node != NULL)
		{
			temp = node->next;
			free(node);
			node = temp;
		}
		n++;
	}
}
