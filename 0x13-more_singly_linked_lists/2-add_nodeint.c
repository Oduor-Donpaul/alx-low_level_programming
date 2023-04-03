#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: pointer to head of listint_t
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
