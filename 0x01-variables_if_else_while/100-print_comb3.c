#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations of single digit
 * Return: 0
 */
int main(void)
{
	int j;
	int k = 0;

	while (k < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (k != j && k < j)
			{
				putchar('0' + k);
				putchar('0' + j);

				if (j + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			j++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
