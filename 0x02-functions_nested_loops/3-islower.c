#include "main.h"

/**
 * islower - checks for lowercase character
 *
 * Return: Always 0 if successful
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}