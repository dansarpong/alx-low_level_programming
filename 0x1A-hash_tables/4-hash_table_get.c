#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: the hash table you want to look into
  * @key: the key you are looking for
  * Return: value associated with the element, or NULL upon failure
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *target;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	target = ht->array[index];
	while (target)
	{
		if (!strcmp(target->key, key))
			return (target->value);
		target = target->next;
	}

	return (NULL);
}
