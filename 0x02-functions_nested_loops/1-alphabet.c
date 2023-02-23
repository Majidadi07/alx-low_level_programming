#include "main.h"

/**
 *
 *
 * Return: always give 0 error for a successful run
 */

void print_alphabet(void)
{
	int a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
