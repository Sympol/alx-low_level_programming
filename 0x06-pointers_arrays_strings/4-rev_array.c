#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *@a: pointer
 *@n: var
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < n / 2 ; i++, j--)
	{
		k = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = k;
	}
}
