#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char chy = 'a';

	while (chy<='z')
	{
		_putchar(chy);
		chy++;
	}
	_putchar('\n');
}
