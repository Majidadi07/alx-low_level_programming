#include "main.h"

/**
 * puts2 - function that print every other character
 * @str: char pointer type as input
 * Return: void function
 *
 */

void puts2(char *str)
{
	int n, m;

	n = 0;
	m = 0;

	while (str[n] != '\0')
		n++;
	n -= 1;

	for (m = 0; m <= n; m += 2)
		_putchar(str[m]);

	_putchar('\n');
}
