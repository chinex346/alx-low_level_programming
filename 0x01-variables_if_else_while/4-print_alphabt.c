#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * print all the letters except q and e,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chy = 'a';

	while (chy <= 'z')
	{
		if (chy != 'e' && chy != 'q')
		{
			putchar(chy);
		}
		chy++;
	}
	putchar('\n');
	return (0);
}
