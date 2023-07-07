#include "hash_tables.h"

/**
* hash_table_set - adds element to the hash table
* @ht: hash table to be updated
* @key: key
* @value: value associated with the key, can be an empty string
* Return: 1 one on sucess otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *new_node = (hash_node_tmalloc(sizeof(hash_node_t));

	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	} else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
