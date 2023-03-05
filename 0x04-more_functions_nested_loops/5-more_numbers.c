#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints from 0 to 14 ten times
 * Return: a void function
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = '0'; b <= '14'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
	_putchar('\n');
}
