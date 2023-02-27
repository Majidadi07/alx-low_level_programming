#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that print the length of a string
 * @s: a pointer of char type as the parameter
 * Return: return 0 for a success run
 *
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
