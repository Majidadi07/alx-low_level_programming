#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point of the program
 *
 * Return: give me 0 for success
 *
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
