#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point of the program
 *
 * Return: give 0 for success
 *
 */

int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');

	return (0);
}
