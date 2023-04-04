#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if it fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (prev == NULL)
	{
		*head = temp->next;
	} else
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
