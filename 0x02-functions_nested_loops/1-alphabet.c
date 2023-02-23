#include <stdio.h>
#include "header.h"

/**
 * main - starting point
 *
 * Return: 0 for a successful run
 */

int main(void){
	void print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{
		_putchar(lt);
		lt++;
	}
	_putchar('\n');
}
