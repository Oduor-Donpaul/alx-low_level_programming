#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds node at the end of listint_t
 * @head: pointer to head
 * @n: integer value to be added
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *temp;

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	return (last_node);
}
