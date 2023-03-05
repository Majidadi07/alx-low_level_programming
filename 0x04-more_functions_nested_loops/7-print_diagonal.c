#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print \ in a diagonal line manner
 * @n: number of line to print
 * Return: a void function
 *
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (a == b)
				{
					_putchar('\\');
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
