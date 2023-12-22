#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *target;
	unsigned long int i = 0;

	if (!ht)
		return;

	putchar('{');
	while (i < ht->size)
	{
		target = ht->array[i];
		while (target)
		{
			if (i != 0)
				printf(", ");

			printf("'%s': '%s'", target->key, target->value);
			target = target->next;
		}
		i++;
	}
	printf("}\n");
}
