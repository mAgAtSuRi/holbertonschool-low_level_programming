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
	hash_node_t *node, *tmp;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while(tmp->next != NULL)
	{
		if (tmp->key == key)
		{
			free(tmp);
			tmp->value = strdup(value);
			 if (tmp->value == NULL)
                return (0);
            return (1);
		}
		tmp = tmp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->valu == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
