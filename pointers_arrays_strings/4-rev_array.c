#include "main.h"
/**
 * reverse_array - Write a function that reverses the content of an array
 * of integers.
 * @a: array.
 * @n: .
 */
void reverse_array(int *a, int n)
{
	int large = 0, i, aux;

	for (i = 0; i < n; i++)
		large++;
	large--;
	for (i = large; i > large / 2; i--)
	{
		aux = a[i];
		a[i] = a[large - i];
		a[large - i] = aux;
	}
}
