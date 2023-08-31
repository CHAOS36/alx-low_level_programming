#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index) 
{
    	if (index > 63) 
	{
        	return -1; // Indique une erreur si l'index est hors limites
    	}

    	*n |= (1UL << index); // Définit le bit à l'index spécifié
    	return 1; // Indique que le bit a été correctement défini
}
