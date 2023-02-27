#include "main.h"
#include <stdio.h>

/**
 * _puts - function to print the string entered
 * @str: a char variable as parameter
 * Return: a void function, no return
 */

void _puts(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
