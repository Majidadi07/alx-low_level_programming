#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that print numbers from 0 to 9 except for 2 and 4
 * Return: a void function
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		if (a == '2' || a == '4')
			continue;
		_putchar(a);
	_putchar('\n');
}
