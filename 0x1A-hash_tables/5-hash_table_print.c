#include "hash_tables.h"

/**
* hash_table_print - prints hash table
* @ht: hash table to be printed
* Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (!comma)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			comma = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
