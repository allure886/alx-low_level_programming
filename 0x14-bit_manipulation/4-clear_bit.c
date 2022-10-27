#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: number to be operated on
 * @index: index
 * Return: 1 on success and -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask);

	return (1);
}
