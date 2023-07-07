#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table to look into
* @key: key to be looked
* Return: value associated with the element of NULL if key couldn't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
