#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
