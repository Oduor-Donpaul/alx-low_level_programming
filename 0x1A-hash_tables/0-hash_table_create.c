#include "hash_tables.h"
/**
* hash_table_t *hash_table_create - creates a hash table
* @size: size
* Return: pointer to the newly created hash tabe else Null
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i = 0;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
