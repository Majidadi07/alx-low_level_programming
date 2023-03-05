#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that check if n input is a digit or not
 * @c: inputed parameter
 * Return: give 1 for digit and 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
