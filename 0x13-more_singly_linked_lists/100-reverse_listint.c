#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head
 * Return: pointer to first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *prev = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		prev = temp;

	}
	*head = temp->next;
	(*head)->next = prev;
	return (*head);
}
