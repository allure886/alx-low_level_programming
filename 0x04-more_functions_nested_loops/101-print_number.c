#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	char h = 45;
	char o = 48;
	int i = n;


	if (i / 10 == 0)
	{
		if (i < 0)
			_putchar(h);
		_putchar(abs(i) + o);
		return;
	}

	print_number(i / 10);

	o = o + (abs(i % 10));
	_putchar(o);
}
