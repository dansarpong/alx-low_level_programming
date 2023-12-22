#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table you want to add or update the key/value to
  * @key: the key (cannot be empty)
  * @value: value associated with the key (cannot be empty)
  * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *target;
	unsigned long int index;

	if (!key || !value || !ht)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		target = ht->array[index];
		while (target)
		{
			if (!strcmp(key, target->key))
			{
				free(target->value);
				target->value = strdup(value);
				free(new);
				return (1);
			}
			target = target->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
