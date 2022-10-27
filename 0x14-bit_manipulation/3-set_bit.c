#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to be operated on
 * @index: index
 * Return: 1 on success  and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 68)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask) | (1 << index);

	return (1);
}
