#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	return (new);
}
