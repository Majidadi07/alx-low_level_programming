#include <stdio.h>
#include <unistd.h>
/**
 * main - main program start
 *
 * Return: provide 0 message for a successful run
 *
 */

int _putchar(char c);

int main(void)
{
	char c;
	_putchar(c);

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
