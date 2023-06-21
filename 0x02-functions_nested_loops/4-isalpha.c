#include "main.h"

/**
 * _isalpha - check the code for ALX School students.
 *
 * @c: is c an integer argument
 *
 * Return: Always 0.
 */

int _isalpha(int j)
{

	if (j >= 97 && j <= 122)
	{
		return (1);
	}
	else if (j >= 65 && j <= 90)
	{
		return (1);
	}
	return (0);
}
