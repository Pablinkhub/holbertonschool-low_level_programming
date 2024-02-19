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

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
