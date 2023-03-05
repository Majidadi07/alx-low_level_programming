#include <stdio.h>

/**
 * main - starting point of the program
 * Return: return 0 for a run without error
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				puts("Fizz");
			}
			else if (a % 5 == 0)
			{
				puts("Buzz");
			}
			else if ((a % 3 == 0) && (a % 5 == 0))
			{
				puts("FizzBuzz")
			}
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
