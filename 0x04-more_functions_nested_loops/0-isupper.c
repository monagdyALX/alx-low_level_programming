#include "main.h"
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
