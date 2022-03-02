/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{

  int n = 0;
  int count = 0;
  int sum = 0;

  printf("Enter the value of n : ");
  scanf("%d",&n);

  for(count = 0 ; count <= n ; count++)
  {
    sum = sum + count;
  }  

  printf("sum : %d ",sum);
  
  return 0;
}

