#include "main.h"
#include <stdio.h>
/**
* print_last_digit - a function that prints the last digit of a number.
*
*@n: number
*
*Return: always 0
*/
int print_last_digit(int n)
{
	int p = n % 10;

	if (p < 0)
		p = -p;

	_putchar(p + '0');

	return (p);
}
