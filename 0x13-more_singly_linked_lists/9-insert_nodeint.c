#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at given index
 * @head: pointer to head
 * @idx: index whre the node shoul be inserted
 * @n: value of the node
 * Return: address of the new node or NULL it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *temp;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
