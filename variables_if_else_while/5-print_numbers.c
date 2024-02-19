#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 starting from
 *
 * Return: 0
 *
 */
int main(void)
{
	char a;

	for (a = 0 ; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
