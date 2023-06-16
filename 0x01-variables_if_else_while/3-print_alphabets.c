#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char caz = 'a';

	while (caz <= 'z')
	{
		putchar(caz);
		caz++;
	}

	caz = 'A';

	while (caz <= 'Z')
	{
		putchar(caz);
		caz++;
	}

	putchar('\n');
	return (0);
}
