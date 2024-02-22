#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @b: number
 *
 * @a: number
 *
 * Return: Coso
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
