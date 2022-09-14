#include "main.h"
/**
 *  print_alphabet_x10 - prints 10 times the alphabet,
 *  in lowercase,
 *  followed by a new line.
 *  Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int d = 0;

	while (d < 10)
	{
		char chy = 'a';

		while (chy <= 'z')
		{
			_putchar(chy);
			chy++;
		}
		d++;
		_putchar('\n');
	}
}
