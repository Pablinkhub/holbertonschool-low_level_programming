#include <stdio.h>
/**
 * main - Imprime el abecedario con una linea extra.
 *
 * Return: 0
 *
 */
int main(void)
{

int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
