#include "hash_tables.h"
/**
 * hash_table_get - gets a value in a hashtable from the key
 *
 * @ht: hash table
 * @key: key
 *
 * Return: the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *temp = ht;
	char *dubkey = strdup(key);

	unsigned long int index = key_index((unsigned char *) key, 1024);

	temp->array[index] = 
}
