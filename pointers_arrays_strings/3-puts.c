#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: string
 *
 *Return: 0
 */
void _puts(char *str)
{
int i = 0; /* Aquí le doy valor 0 a i para comenzar el contador*/

while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
