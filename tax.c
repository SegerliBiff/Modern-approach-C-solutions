// This is a simple tax calculator that will add a users chosen percentage of tac to an amount of the users choice
// It does not work with floating point numbers
#include <stdio.h>

int main(void){

  int tax, amount, after_tax;

  printf("Please enter the amount: ");
  scanf("%d", &amount);

  printf("Please enter percentage of tax: ");
  scanf("%d", &tax);

  after_tax = amount/100 * tax + amount;
  printf("After tax: %d", after_tax);

  return 0;

}
