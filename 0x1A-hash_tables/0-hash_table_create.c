#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t *hn = NULL;

	ht = malloc(sizeof(unsigned long int) * size);
	if (!ht)
	{
		return NULL;
	}

	hn = malloc(sizeof(hash_node_t));
	if (!hn)
	{
		return NULL;
	}

	return (ht);
}
