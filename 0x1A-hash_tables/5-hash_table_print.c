#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: This function prints the key/value pairs in the hash table
 * in the order they appear in the array, handling any linked list (collisions)
 * at each index.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* Flag to handle printing commas between pairs */

	if (ht == NULL)
		return;

	printf("{"); /* Start the dictionary-like print format */

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first == 0)
				printf(", "); /* Print a comma before each new pair, except the first */

			printf("'%s': '%s'", node->key, node->value); /* Print the key/value pair */
			first = 0; /* After first pair is printed, subsequent pairs need a comma */
			node = node->next; /* Move to the next node in the list */
		}
	}

	printf("}\n"); /* End the dictionary-like print format */
}
