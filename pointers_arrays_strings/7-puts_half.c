#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line.😴
 *
 *@str: String
 *
 *Return: Half string
 */
void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 1)
	{
		i = (l - 1) / 2;
		i++;
	}
	else
		i = l / 2;
	for (; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
