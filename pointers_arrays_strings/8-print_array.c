#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of integers.
 *
 *@a: Number
 *
 *@n: Number
 *
 *Return: Algo
 */
void print_array(int *a, int n)
{
	int i = 0;
		for (; i < n; i++)
		printf("%d", a[i]);
		if (i > 0 && i < n)
			printf(", ");
}
