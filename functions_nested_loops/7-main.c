#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(-1024);
	_putchar('0' + r);
	print_last_digit(INT_MIN);
	_putchar('\n');
	return (0);
}
