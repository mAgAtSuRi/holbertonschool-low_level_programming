#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key to check
 * @size: size of the array of the hash table
 *
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key), index;

	index = hash % size;
	return (index);
}
