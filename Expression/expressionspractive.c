#include <stdio.h>
#include <math.h>


int main(void){
  
   int numberTwo = 2;
   int numberSix = 6;
   float powerOne = pow(5,2); // 5 to the power of 2
   float powerTwo = pow(2,2);
   float powerThree = pow(1, 4);
   float powerFour = pow(3, 3);
   float powerFive = pow(2, 5);
   float powerSix = pow((22 / 2 - 2 * 5), 2);
   float powerSeven = pow((4 - 6 / 6), 2);


   printf("%d \n", 7 - 24 / 8 * 4 + numberSix);
   printf("%d \n", 18 / 3 - 7 + numberTwo * 5);
   printf("%d \n", numberSix * 4 / 12 + 72 / 8 - 9);
   printf("%d \n", (17 - 6 / numberTwo) + 4 * 3);
   printf("%d \n", -2 * (1 * 4 - numberTwo / numberTwo) + (numberSix + numberTwo - 3));
   printf("%d \n", -1 * ((3 - 4 * 7) / 5) -2 * 24 / numberSix);
   printf("%f \n", (3 * powerOne / 15) - (5 - powerTwo));
   printf("%f \n", (powerThree * (powerTwo + powerFour) - powerFive / 4));
   printf("%f \n", powerSix + powerSeven);
   return 0;
}
