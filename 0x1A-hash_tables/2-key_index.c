#include "hash_tables.h"
/**
 * key_index - gives the index where is located a key in a hash table
 *
 * @key: key to find index to
 * @size: size of the array of the hash table
 *
 * Return: the index where the key is located
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
