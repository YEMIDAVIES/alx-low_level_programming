#include <stdio.h>

/**
 * main - print most letters of the alphabet
 *
 * Return: Always 0 (sucess)
 *
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
