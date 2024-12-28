
// This will be a continuation of the box volume calculator I made. This program however will calculate the volume for a sphere instead of a box

#include <stdio.h>

int main(void){

  // This calc will be using int instead of float numbers, so no decimals for the user input at least

  int volume, radius;
  float pi; 
  pi = 3.14159;

  printf("Enter radius of sphere: ");
  scanf("%d", &radius);
  
  volume = (4.0f/3.0f)*pi*(radius*radius*radius);

  printf("volume: %d", volume);

  return 0;
}
