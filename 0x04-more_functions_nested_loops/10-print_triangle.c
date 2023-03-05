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
		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
			{
				if (b >= a)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
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
