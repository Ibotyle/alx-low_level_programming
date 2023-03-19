#include <stdio.h>
/**
 * main - Entry point to program
 *
 * Return: return value always o
 *
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar((x) + '0');
	putchar('\n');
	return (0);
}
