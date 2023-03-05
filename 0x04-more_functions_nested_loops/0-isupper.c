#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that check if a character is an uppercase
 * @c: character as parameter input
 * Return: give 0 for successful run.
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
