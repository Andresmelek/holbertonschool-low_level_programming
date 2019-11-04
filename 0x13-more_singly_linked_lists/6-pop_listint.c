#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to the first node
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	node = temp->n;
	free(temp);
	return (node);
}
