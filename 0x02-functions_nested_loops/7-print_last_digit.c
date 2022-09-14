#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	
	int chy;
	
	if (n < 0)
	n = -n;
		chy = n % 10;
	if (chy < 0)
		chy= -chy;
	_putchar(chy + '0');
	return (chy);	
}
