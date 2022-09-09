#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints main value of alphabets
 *
 * Return: Always 0 if successful
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e')
		{
			lower++;
		}
		else if (lower == 'q')
		{
			lower++;
		}
		else
		{
			putchar(lower);
			lower++;
		}
	}
	putchar('\n');
	return (0);
}
