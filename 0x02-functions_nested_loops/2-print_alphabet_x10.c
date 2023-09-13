#include "main.h"
/* function prints 10 times alphabet, in lowercase, followed by a new line */
void print_alphabet_x10(void)
{
	char lt;
	int i;

	for (i = 0; i < 10 ; i++)
	{

	lt = 'a';
		for (lt = 'a'; lt <= 'z'; lt++)
		{
			_putchar(lt);
		}
		_putchar ('\n');
	}
}
