#include "main.h"

/**
 * more_numbers - Print 10 times the numbers, from 0 to 14.
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int a;
	int b;
	int d1;
	int d2;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
			{
				d1 = b / 10;
				_putchar(d1 + '0');
			}
			d2 = b % 10;
			_putchar(d2 + '0');
		}
		_putchar('\n');
	}
}
