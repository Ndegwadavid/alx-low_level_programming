#include "lists.h"

/**
 * get_nodeint_at_index - returns the ninth node of linked list
 * @head: pointer to head pointer of linked list
 * @index: ninth node
 * Return: ninth node, NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	while ((x < index) && head != NULL) /* iterate until list ends*/
	{
		head = head->next;
		x++; /*increment*/
	}

	if (x == index) /*check that index was within list size*/
		return (head);

	return (NULL);
}
