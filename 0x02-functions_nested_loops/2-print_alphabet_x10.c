#include "main.h"

/**
  * print_alphabet_x10 - generate alphabet x10 times
  * Description : print the alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char c;
	int x = 0;
	while (x < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		x++;
		_putchar('\n');
	}
}
