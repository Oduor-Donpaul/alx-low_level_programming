#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @*h: pointer to the header of a limked lists
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
