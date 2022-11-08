#include <stdio.h>

/**
 * main - print the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
