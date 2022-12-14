#include <stdio.h>

/**
 * print_alphabet - prints lower alphabet,
 * followed by a new line
 */
void print_alphabet(){
	  char i;
	  for(i = 'a'; i<='z'; i++)
	        putchar(i);
	  putchar('\n');
}

/**
 * main - prints the 0-9 in single digit,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
