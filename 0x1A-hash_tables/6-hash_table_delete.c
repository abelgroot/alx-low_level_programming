#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Description: Frees all the memory allocated for the hash table, including
 * the nodes and the array.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Loop through each index in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i]; /* Get the node at index i */

		/* Free all nodes in the linked list at this index */
		while (node != NULL)
		{
			tmp = node->next;      /* Save the next node */
			free(node->key);       /* Free the key */
			free(node->value);     /* Free the value */
			free(node);            /* Free the node itself */
			node = tmp;            /* Move to the next node */
		}
	}

	/* Free the array itself */
	free(ht->array);

	/* Free the hash table structure */
	free(ht);
}
