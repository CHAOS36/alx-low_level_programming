#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pipo;
	unsigned long int i;

	pipo = malloc(sizeof(hash_table_t));
	if (pipo == NULL)
		return (NULL);

	pipo->size = size;
	pipo->array = malloc(sizeof(hash_node_t *) * size);
	if (pipo->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pipo->array[i] = NULL;

	return (pipo);
}
