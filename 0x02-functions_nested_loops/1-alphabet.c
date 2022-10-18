#include "main.h"

/**
  * print_alphabet - generate alphabet
  * Description : print the alphabet
  *
  * Return: void
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
