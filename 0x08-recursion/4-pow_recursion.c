#include "main.h"
/**
 * _pow_recursion - return value of x raised to the power of y.
 * @x: first integer
 * @y: second integer
 * Return: Result
 */
int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	pow = _pow_recursion(x, y - 1);
	return (pow * x);
}
