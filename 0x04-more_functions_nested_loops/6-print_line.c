#include "main.h"

/**
 * print_line - draw a straight line in the terminal.
 *@n: number of times the character _ should be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n ; c++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
