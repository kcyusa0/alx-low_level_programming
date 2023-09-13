#include<stdio.h>
#include"main.h"
/* Write a program that prints _putchar, followed by a new line. */
int main(void)
{
	char mystring[] = "_putchar\n";
	int i = 0;

	while (mystring[i] != '\0')
	{
	putchar (mystring[i]);
	i++;
	}
	return (0);
}
