#include "main.h"

/**
 *new projet aimed to  print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
int j = 0;
while (j < 10)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
i++;
}
}
