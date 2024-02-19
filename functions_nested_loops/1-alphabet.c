#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: always 0.
 *
 */
void print_alphabet(void)
{
	int a;

	for (a = 97 ; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
