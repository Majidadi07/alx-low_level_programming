#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draw a stright line
 * @n: input number of line distance to be drawn
 * Return: a void function
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
