#include <stdio.h>

/**
 * main -  Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */

int main(void)
{
	int count = 3;
	long int a = 1, b = 2;
	long int next = a + b;

	printf("%lu,", a);
	printf("%lu, \n", b);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, \n ", next);
		}
		a = b;
		b = next;
		next = a + b;
		count++;
	}
	return (0);
}
