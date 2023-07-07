#include "hash_tables.h"
/**
* key_index - gives index of a key
* @key: key
* @size: size of the array
* Return: index at which key/value pair should be stored in the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
