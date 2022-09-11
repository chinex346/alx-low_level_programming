#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chy;

	for (chy = 'z'; chy >= 'a'; chy--)
	{
		putchar(chy);
	}
	putchar('\n');
	return (0);
}
