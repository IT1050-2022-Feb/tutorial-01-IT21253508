/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

  int main() 
{
  int no1, no2;
  //declare function
  int minimum(int no1,int no2);
  int maximum(int no1,int no2);
  int multiply(int no1,int no2);

  //user inputs
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
  
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

  //output
   printf("mini : %d \n", minimum(no1, no2));
   printf("max : %d \n", maximum(no1, no2));
   printf("multiply : %d \n", multiply(no1, no2));
  
   return 0;
}

//function implementation
int minimum(no1,no2)
{
  if (no1 < no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }  
    
}

//function implementation
int maximum(no1,no2)
{
  if (no1 < no2)
  {
    return no2;
  }
  else
  {
    return no1;
  }  
    
}

//function implementation
int multiply(no1,no2)
{
  int multi;

  multi = no1 * no2;

  return multi; 
}
