/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main()
{ 
  int distance = 0;
  int amount = 0;

  //user inputs
  printf("Enter your travel distance : ");
  scanf("%d",&distance);

  //conditions and output 
  if(distance < 30)
  {
    amount = distance * 50;
    printf("Amount is %d",amount);
    
  }  
  else if (distance > 30)
  {
    amount = distance * 30.0 + (distance - 30.0) * 40.0;
    printf("Amount is %d",amount);
  } 
  else
  {
    printf("Error Occured");
    
  }  
  
  return 0;
}
