#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char chy;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (chy = 'a'; chy <= 'f'; chy++)
	{
		putchar(chy);
	}
	putchar('\n');
	return (0);
}
