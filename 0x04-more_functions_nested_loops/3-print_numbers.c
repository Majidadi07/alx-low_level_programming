#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that print numbers from 0 to 9
 * Return: a void funtion
 *
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
