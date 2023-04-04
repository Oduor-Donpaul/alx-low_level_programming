#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head
 * @index:index to be retutned
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = NULL;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			temp = head;
		head = head->next;
		count++;
	}
	return (temp);
}
