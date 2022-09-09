#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 if successful
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	lower = 'A';
	while (lower <= 'Z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
