#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * Description: prints the last digit of n and prints out whether it is
 * greater than 5, 0, or less than 6
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	printf("Last digit of %i is %i and is ", n, ld);
	if (ld > 5)
		printf("greater than 5\n");
	else if (ld == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
