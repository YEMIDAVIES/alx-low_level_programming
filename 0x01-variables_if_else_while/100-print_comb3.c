#include <stdio.h>

/**
 * main - print different combination of two digits.
 *
 * Return: Always 0 (sucess)
 *
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
