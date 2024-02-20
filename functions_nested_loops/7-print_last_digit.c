#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number.
*
*@n: number
*
*Return: always 0
*/
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
