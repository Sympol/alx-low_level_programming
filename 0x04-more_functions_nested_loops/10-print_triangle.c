#include "main.h"

/**
 * print_triangle - a triangle, followed by a new line.
 *@size: the size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int c;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0 ; l < size ; l++)
	{
		for (c = 0 ; c < size ; c++)
		{
			if (c >= size - l - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
