#include "main.h"
/**
 *_isalpha - a
 *
 *@c: Letter
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
