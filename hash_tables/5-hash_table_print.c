#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (comma == 1)
					printf(", ");

				printf("'%s': '%s'", node->key, node->value);
				comma = 1;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
