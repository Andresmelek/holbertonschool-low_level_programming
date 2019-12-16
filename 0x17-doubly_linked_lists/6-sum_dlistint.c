#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: pointer to the first node
 * Return: the sum of all data and 0 when is empty
*/
int sum_dlistint(dlistint_t *head)
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
