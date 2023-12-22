#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table
  * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *target, *temp;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		target = ht->array[i];
		while (target)
		{
			temp = target->next;
			free(target->key);
			free(target->value);
			free(target);
			target = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
