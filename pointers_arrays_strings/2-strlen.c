#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: String
 *
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0; /* a se utiliza para contar la longitud */

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
