#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point of running the program
 *
 * Return: provide 0 error for a successful run
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
