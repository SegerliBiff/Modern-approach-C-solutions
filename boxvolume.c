/* This program will calculate the volume of a box depending on the users input
 */
#include <stdio.h>

int main(void){
  int height, length, width, volume, weight;

  printf("Enter height of box: ");
  scanf("%d", &height);

  printf("Enter length of box: ");
  scanf("%d", &length);

  printf("Enter width of box: ");
  scanf("%d", &width);

  volume = height * length * width;

  printf("Volume: %d", volume);

  return 0;
}
