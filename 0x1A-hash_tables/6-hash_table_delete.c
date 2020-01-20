#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp1;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];

		while (tmp1)
		{
			tmp = tmp1;
			free(tmp->key);
			free(tmp->value);
			tmp1 = tmp1->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
