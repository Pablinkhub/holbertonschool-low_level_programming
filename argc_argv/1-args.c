#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the program arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

    /* Suppress unused parameter warning */
	(void)argv;

	printf("%d\n", count);

	return (0);
}

