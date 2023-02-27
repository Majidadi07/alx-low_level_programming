#include "main.h"
#include <stdio.h>

/**
 * print_rev - function to print string in reverse order
 * @s: char type parameter
 * Return: void function
 */

void print_rev(char *s)
{
	char *n;

	*n = s;

	while (*n)
		n++;
	n -= 1;

	while (n)
	{
		_putchar(*s);
		n--;
	}
	_putchar('\n');
}
