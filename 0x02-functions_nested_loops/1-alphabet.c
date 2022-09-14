#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char chy = 'a';

	for (chy <= 'z'; chy++)
	{
		_putchar(chy);
		chy++;
	}
	_putchar('\n')
}
