#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, 1024);

	hash_table_t *temp = ht;

	hash_node_t *hn = NULL;

	if(key[0] == '\0')
		return(0);

	hn = malloc(sizeof(hash_node_t));
	if(!hn)
	{
		return (0);
	}

	hn->key = strdup(key);
	hn->value = strdup(value);

	if(!temp->array[index])
	{
		temp->array[index] = hn;
		hn->next = NULL;
	}
	else
	{
		hn->next = temp->array[index];
		temp->array[index] = hn;
	}
	return(1);
}
