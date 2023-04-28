#include "lists.h"

/**
 * sum_listint - return sum of all data in linked list
 * @head: pointer to head of linked list
 * Return: sum, or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
