#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: char
 *
 * Return: k
 */
unsigned int _strspn(char *s, char *accept)
{
	int k, l, p = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
			if (s[k] == accept[l])
			{
				p = 1;
				break;
			}
		if (p)
		{
			p = 0;
			continue;
		}
		else
			break;
	}
	return (k);
}
