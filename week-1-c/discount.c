#include <cs50.h>
#include <stdio.h>

float discount(float regularPrice, int off)
{
  return regularPrice * (100 - off) / 100;
}

int main(void)
{

  float regular = get_float("Regular Price: \n");
  int percent_off = get_int("Precent off: \n ");
  float sale = discount(regular, percent_off);
  printf("Price after discount is %.2f\n", sale);
}