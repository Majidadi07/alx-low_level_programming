#include "main.h"

/**
 * _strlen_recursion - function that return thr lenght of a string
 * @s: the inputed string
 *
 * Return: success if no error
 *
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
