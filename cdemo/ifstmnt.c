#include <stdio.h>

int main()
{
  int a = 0;
  int b = 3;

  // if statement to test is a is equal to 0
  if (a == 0){
    printf("a is 0\n");
  }
   else {
    printf("a is not 0\n");
  }

  if (a !=b){
     printf("a is not b");
  }
   else{
     printf("a is b");
   }

  if (a > b){
     printf("a is greater than b");
  }
   else{
     printf("a is less than b");
  }
  if (a >= b){
     printf("a is greater than or equal to b");
  }
   else{
     printf("a is not greater than of equal to b");
  }
  if (a == 0 && b ==0){
     printf("a and b are equal");
  }
    else{ 
     printf("a and b are not equal");
  }
} 
