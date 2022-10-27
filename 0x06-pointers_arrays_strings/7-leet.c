#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *@a: pointer
 * Return: Always 0 (Success)
 */
char *leet(char *a)
{
	int i;
	int j;
	char k[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; k[j] != '\0' ; j++)
		{
			if (a[i] == k[j])
			{
				a[i] = n[j];
			}
		}
	}
	return (a);
}
