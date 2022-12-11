#include <stdio.h>

/**
 * main - prints the 0-9 in single digit,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;
  
  for (dig =48; dig < 58; dig++)
		putchar(dig);
	putchar('\n');
	return (0);
}
