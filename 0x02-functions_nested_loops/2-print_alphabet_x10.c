#include "main.h"
/**
 *  print_alphabet_x10 - prints 10 times the alphabet,
 *  in lowercase,
 *  followed by a new line.
 *  Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char chy = 'a';
	int d = 0;

	while (d < 10)
	{
		d++;
		_putchar(chy);
	}
	_putchar('\n');
}
