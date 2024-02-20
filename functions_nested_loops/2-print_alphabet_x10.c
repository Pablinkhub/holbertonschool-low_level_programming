#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int a, count;

	for (count = 0; count < 10; count++)
	{
		for (a = 97 ; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
