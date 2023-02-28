#include "main.h"
#include <stdio.h>

/**
 * print_rev - function to print string in reverse order
 * @s: char type parameter
 * Return: void function
 */

void print_rev(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
		n++;

	while (n)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
