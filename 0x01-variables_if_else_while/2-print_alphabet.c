#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return:Always 0 if successful
 */
int main(void)
{
	char alpha_lower = 'a';

	while (alpha_lower <= 'z')
	{
		putchar(alpha_lower);
		alpha_lower++;
	}
	putchar('\n');
	return (0);
}
