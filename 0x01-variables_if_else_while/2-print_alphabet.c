#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints an alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n');
	return (0);
}
