/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main()
{
  int mark_1,mark_2;
  float total,avg;

  //declare to 0
  total = 0;
  avg = 0;

  //get user inputs
  printf ("Enter mark 01 : ");
  scanf("%d",&mark_1);

  printf ("Enter mark 02 : ");
  scanf("%d",&mark_2);

  //calculations
  total = mark_1 + mark_2;
  avg = total / 2.0;

  //Outputs
  printf("total is %.2f\n",total);
  printf("Average is %.2f\n",avg);

  return 0;
}

