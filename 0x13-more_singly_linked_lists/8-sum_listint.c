#include "lists.h"
/**
 * sum_listint - returns sum of all data(n)
 * @head: pointer to head
 * Return: sum of all data in the listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
