#include "main.h"

/**
 * _isdigit - Check for a digit (0 through 9)
 *@c: int var
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}