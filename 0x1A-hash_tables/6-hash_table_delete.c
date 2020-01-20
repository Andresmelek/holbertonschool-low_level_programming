#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp1;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		tmp1 = ht->array[i];

		while (tmp)
		{
			tmp = tmp1;
			free(tmp->key);
			free(tmp->value);
			tmp1 = tmp1->next;
			free(tmp);
			tmp = tmp1;
		}
	}
	free(ht->array);
	free(ht);
}
