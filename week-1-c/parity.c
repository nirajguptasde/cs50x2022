#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int num = get_int("Enter a number:\n");
  if (num % 2 == 0)
  {
    printf("%i is an even number\n", num);
  }
  else
  {
    printf("%i is an odd number\n", num);
  }
}