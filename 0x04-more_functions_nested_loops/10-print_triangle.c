#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function to print a triangle shape
 * @size: size of the triangle
 * Return: 0 for success
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= zize; b++)
			{
				if (b <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
