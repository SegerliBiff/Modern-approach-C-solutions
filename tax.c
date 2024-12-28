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
