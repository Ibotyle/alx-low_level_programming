#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Value always 0
 *
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char result[50];
	if (n > 5)
	{
		result = "and is greater than 5";
	} else if (n == 0){
		result = "and is 0";
	} else if (n < 6 && n != 0)
	{
		result = "and is less than 6 and not 0";
	}
	printf("Last digit of %d is %s\n", n, result);
	
	return (0);
}
