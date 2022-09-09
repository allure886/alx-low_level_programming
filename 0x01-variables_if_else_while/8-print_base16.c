#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always successful if 0
 */
int main(void)
{
	char base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	base = 'a';
	while (base <= 'f')
	{
		putchar(base);
		base++;
	}
	putchar('\n');
	return (0);
}
