#include <cs50.h>
#include <stdio.h>

int main(void)
{
  const int myPoints = 2;
  int points = get_int("How many points did you lose? ");

  if (points < myPoints)
  {
    printf("You lost fewer points than me.\n");
  }
  else if (points > myPoints)
  {
    printf("Your lost more points than me.\n");
  }
  else
  {
    printf("You lost more points than me.\n");
  }
}