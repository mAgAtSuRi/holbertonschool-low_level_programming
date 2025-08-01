#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table to add the element
 * @key: key in new element
 * @value: value associated with the key
 *
 * Return: 1 if succeeded otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	
	node->key = key;
	node->value = value;
	node->next = NULL;

	index = key_index(key, ht->size);
	hash_table_t->array[index] = node;

	Return (1);
}
