#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point of the program
 *
 * Return: supply 0 for a successful run
 *
 */

int main(void)
{
	int i;
	char a;

	for  (i = '0'; i <= 9; i++)
	{
		putchar(i);
	}	
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
