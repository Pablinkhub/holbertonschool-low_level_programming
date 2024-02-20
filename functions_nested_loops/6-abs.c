#include "main.h"
/**
* _abs - a function that computes the absolute value of an integer.
*
*@n: number
*
*Return: always 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}
	return (0);
}
