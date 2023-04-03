#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in linked lists
 * @h: pointer to the head of the list
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
