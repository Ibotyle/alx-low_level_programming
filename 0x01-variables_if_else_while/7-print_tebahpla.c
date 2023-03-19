#include <stdio.h>
/**
 * main - Entry point to program
 *
 * Return: return value always o
 *
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
