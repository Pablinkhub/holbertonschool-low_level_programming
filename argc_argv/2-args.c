#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 *
 *@argv: Varable
 *@argc: Variable
 *Return: Thing
 */
int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
