#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: String
 *
 * Return: String and Reverse String
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char j = 0;
	int k = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		i--;
		while (k < i)
		{
			j = s[i];
			s[i] = s[k];
			s[k] = j;
			k++;
			i--;
		}
}
