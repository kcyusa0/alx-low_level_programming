#include "main.h"
/*  a fun that prints the alphabet, in lowercase, followed by a new line. */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar (i);
		_putchar ('\n');
		i++;
	}
}
