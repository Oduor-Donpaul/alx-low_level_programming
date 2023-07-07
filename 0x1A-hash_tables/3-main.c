#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    
     if (!ht)
    {
        printf("Failed to create the hash table.\n");
        return 1;
    }

    // Insert key-value pairs
    if (hash_table_set(ht, "key1", "value1"))
    {
        printf("Successfully inserted key1-value1.\n");
    }
    else
    {
        printf("Failed to insert key1-value1.\n");
    }

    if (hash_table_set(ht, "key2", "value2"))
    {
        printf("Successfully inserted key2-value2.\n");
    }
    else
    {
        printf("Failed to insert key2-value2.\n");
    }

    if (hash_table_set(ht, "key3", "value3"))
    {
        printf("Successfully inserted key3-value3.\n");
    }
    else
    {
        printf("Failed to insert key3-value3.\n");
    }
    if (hash_table_set(ht, "key3", "xxvalue3"))
    {
        printf("Successfully inserted key3-value3.\n");
    }
    else
    {
        printf("Failed to insert key3-value3.\n");
    }

    // Print the hash table to verify the contents
    printf("\nHash Table Contents:\n");
    for (unsigned long int i = 0; i < ht->size; i++)
    {
        hash_node_t *node = ht->array[i];
        printf("Index %lu: ", i);
        while (node)
        {
            printf("(%s, %s) ", node->key, node->value);
            node = node->next;
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}
