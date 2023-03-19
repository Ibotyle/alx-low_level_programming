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
	unsigned char a = '0';

	for (x = 0; x <= 9; x++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (x = 0; x <= 5; x++)
	{
		putchar('0' +a);
		a++;
	}
	putchar('\n');
	return (0);
}
