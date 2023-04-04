#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees listint_t list
 * @head: ponter to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
