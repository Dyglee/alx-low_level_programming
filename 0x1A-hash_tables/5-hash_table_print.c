#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key/value pairs in the hash table in the order
 * they appear in the array of the hash table, following the format:
 * {'key': 'value', 'key2': 'value2', ...}
 * If ht is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
		}
	}
	puts("}");
}
