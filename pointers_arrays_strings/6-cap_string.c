#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s: string.
 * Return: @s capitalized.
 */
char *cap_string(char *s)
{
	int i, C = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.')
			C = 1;
		else if (s[i] == '!' || s[i] == '?' || s[i] == '(' || s[i] == ')')
			C = 1;
		else if (s[i] == '{' || s[i] == '}')
			C = 1;

		else if (C && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			C = 0;
		}
		else
			C = 0;
	}
	return (s);
}
