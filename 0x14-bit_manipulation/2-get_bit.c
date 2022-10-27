#include "main.h"

/**
 * get_bit - a function that returns tge value of a bit at a given index
 * @n: integer to be oprated on
 * @index: index
 * Return: returns value of the bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);

	return (-1);
}
