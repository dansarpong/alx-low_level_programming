#include "hash_tables.h"

/**
  * key_index - gives you the index of a key
  * @key: the key
  * @size: size of the array of the hash table
  * Return: the index to store the key/value pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}