#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while(h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	i++;
	printf("%d\n", h->n);
	return (i);
}
