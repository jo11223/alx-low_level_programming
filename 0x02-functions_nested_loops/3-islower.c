#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _islower(int j)
{

	if (j >= 97 && j <= 122)
		return (1);
	else
		return (0);
}
