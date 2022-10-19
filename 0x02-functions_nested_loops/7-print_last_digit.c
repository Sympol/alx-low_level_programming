#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @dr: digit result of the number
 * Return: value of the last digit
 */
int print_last_digit(int dr)
{
	int last_digit;

	last_digit = (dr % 10);

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
