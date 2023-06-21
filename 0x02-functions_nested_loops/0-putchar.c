#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char arr[] = "_putchar";

	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(arr[j]);
	}
	_putchar('\n');
	return (0);
}
