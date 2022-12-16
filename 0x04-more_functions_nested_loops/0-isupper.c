#include <stdio.h>

/**
 * _isupper - checks whether the letter is cap or not,
 * followed by a new line
 * Return: 1 for Caps 0 for Small
 */
int _isupper(int c)
{
  if(c <= 90 && c >= 60)
  {
    return(1);
  }
  return(0);
}

/**
 * main - prints the 0-9 in single digit,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

  c = 'A';
  printf("%c: %d\n", c, _isupper(c));
  c = 'a';
  printf("%c: %d\n", c, _isupper(c));
  return (0);
}
