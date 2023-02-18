#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point of the program
 *
 * Return: give 0 for successful run
 *
 */

int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
