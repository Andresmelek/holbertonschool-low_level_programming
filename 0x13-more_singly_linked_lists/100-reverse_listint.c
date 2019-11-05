#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function that reverse a list
 * @head: pointer that points to the first node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *revs;

	if (head == NULL)
		return (NULL);

	revs = NULL;
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = revs;
		revs = *head;
		if (temp == NULL)
			break;
		*head = temp;
	}
	return (*head);
}
