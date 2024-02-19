#include <stdio.h>
/**
 * main - Imprimir el abecedario - q y e
 *
 * Return: 0
 *
 */
int main(void)
{

	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
