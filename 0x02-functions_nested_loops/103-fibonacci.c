#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, ext, um;

	j = 1;
	k = 2;
	um = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			um = um + j;
		}
		ext = j + k;
		j = k;
		k = ext;
	}

	printf("%lu\n", um);

	return (0);
}
