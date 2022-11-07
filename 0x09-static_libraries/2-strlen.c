#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}
	return (len);
}
