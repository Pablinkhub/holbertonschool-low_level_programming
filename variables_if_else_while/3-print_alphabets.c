#include <stdio.h>
/**
 * main - Imprime el abecedario con una linea extra.
 *
 * Return: 0
 *
 */
int main(void)
{

char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
