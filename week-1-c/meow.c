#include <cs50.h>
#include <stdio.h>

// meow function
void meow(int meowThisTimes)
{
  // print meows
  for (int i = 0; i < meowThisTimes; i++)
  {
    printf("Meow\n");
  }
  // tell user he got his meows
  printf("There you go, here are your %i meows\n", meowThisTimes);
}

int main(void)
{
  // ask user for how many meows he wants
  int numberOfMeows = get_int("How many meows you want?\n");
  // call meow function to print meows
  meow(numberOfMeows);
  return 0;
}