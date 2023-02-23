#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - main program start
 *
 * Return: provide 0 message for a successful run
 *
 */

int _putchar(char c);

int main(void)
{
	char c = '-';
	char d = 'p';
	char e = 'u';
	char f = 't';
	char g = 'c';
	char h = 'h';
	char i = 'a';
	char j = 'r';

	_putchar(c);
	_putchar(d);
	_putchar(e);
	_putchar(f);
	_putchar(g);
	_putchar(h);
	_putchar(i);
	_putchar(j);

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
