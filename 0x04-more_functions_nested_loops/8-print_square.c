#include "main.h"

/**
 * print_square - print a square, followed by a new line.
 *@size: the size of the square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
