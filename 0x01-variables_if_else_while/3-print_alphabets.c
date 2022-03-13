#include <stdio.h>

/**
 * main - print alphabet using putchar
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'z'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
