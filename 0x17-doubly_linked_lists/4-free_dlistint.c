#include "lists.h"
/**
 * free_dlistint - function that frees a double linked list
 * @head: pointer to the first node of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		aux = aux->next;
		free(aux);
	}
}
