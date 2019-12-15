#include "lists.h"
/**
 * add_dnodeint - function that adds a node at the beginning
 * @head: doble pointer to the first node
 * @n: number to be assigned to the node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
