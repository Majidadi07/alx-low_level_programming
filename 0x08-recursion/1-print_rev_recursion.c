#include "main.h"

/**
 * _print_rev_recursion - Print the input s in reverse
 * @s: the input string
 *
 * Return: give success when no error
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
