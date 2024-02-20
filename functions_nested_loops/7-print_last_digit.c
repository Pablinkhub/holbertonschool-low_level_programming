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
	unsigned int p = n;
	_putchar(p % 10 + '0');
	return (p % 10);
}
