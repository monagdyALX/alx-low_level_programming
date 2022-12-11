#include <stdio.h>

/**
 * main - prints the 0-9 in single digit,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;
	
  	for (dig = 0; dig < 10; dig++)
	{
		printf("%d", dig);
	}
	putchar('\n');
	return (0);
}
