#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int a;
	{
	for (a = 48; a < 58; a++)
	putchar(a);
	for (a = 'a'; a <= 'f'; a++)
	putchar(a);
	}
	putchar('\n');
	return (0);
}
