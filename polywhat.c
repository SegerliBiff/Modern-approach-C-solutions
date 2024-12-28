
//  The polynomial used: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void){

  int x;

  printf("Please enter the value of X: ");
  scanf("%d", &x);

  printf("The answer is: %d\n",
         (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6 );

  return 0;
}
