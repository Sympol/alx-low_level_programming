#include "main.h"
#include <stdio.h>

/**
 * _strcat - Append the src string to the dest string
 *@dest : variable
 *@src : variable
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] += src[a];
		i++;
	}
	dest += '\0';
	return (dest);
}
