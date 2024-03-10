#include "main.h"
#include <stdio.h>
/**
* _strcat - FUNCIÓN
*
*@src: Variable
*@dest: Variable Destino
*
*Return: 0
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
		*dest++ = *src++;
	*dest++ = '\0';

	return (result);
}
