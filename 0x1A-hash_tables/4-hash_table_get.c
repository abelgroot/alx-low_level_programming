#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - a function that retrieves a value associated with a key.
* @ht: is the hash table you want to look into
* @key: is the key you are looking for
*
* Return: the value associated with the element, or
* NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next; /* Move to the next node in the chain */
	}

	return (NULL);
}
