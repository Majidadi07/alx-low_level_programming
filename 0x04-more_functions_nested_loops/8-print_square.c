#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square shape with #
 * @size: size of the square to print
 * Return: a void function
 *
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
