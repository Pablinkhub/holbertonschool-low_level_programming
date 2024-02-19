#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Un programa que genera un numero al azar e identifica si es mayor
 * que 5, 0, o menor que 6 y no 0
 *
 * Return: 0
 */
int main(void)
{
	int n, e;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	e = n % 10;
	printf("Last digit of");
	if (e > 5)
	{
		printf(" %d is %d greater than 5\n", n, e);
	}
	if (e == 0)
	{
		printf(" %d is %d and is 0\n", n, e);
	}
	if (e < 6 && e != 0)
	{
		printf(" %d is %d and is less than 6 and not 0\n", n, e);
	}
	return (0);
}
