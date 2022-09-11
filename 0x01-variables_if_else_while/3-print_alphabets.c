#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chy;
	
	for (chy = 'a'; chy <= 'z'; chy++)
	{
		putchar(chy);
		for (chy = 'A'; chy <= 'Z'; chy++)
		{
			putchar(chy);
		}
		putchar('\n');
	}
		return (0);
}
