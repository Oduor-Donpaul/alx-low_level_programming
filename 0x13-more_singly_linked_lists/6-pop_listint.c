#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: pointer to head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int cont;

	if (*head == NULL)
		return (0);

	cont = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (cont);
}
