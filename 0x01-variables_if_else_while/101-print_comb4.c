#include <stdio.h>
/**
 * main - starting point of execution
 *
 * Return: provide 0 error for a successful run
 *
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if (c != b && b != a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
				}
				if (a == '7' && b == '8' && c == '9')
				continue;
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

