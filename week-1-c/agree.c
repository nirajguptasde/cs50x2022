#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // prompt user for agreement
  char response = get_char("Do you agree? y/n \n");
  // check if they agree
  if (response == 'y' || response == 'Y')
  {
    printf("You agreed.\n");
  }
  else if (response == 'n' || response == 'N')
  {
    printf("Not agreed\n");
  }
}