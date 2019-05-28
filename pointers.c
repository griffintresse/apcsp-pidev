#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  int temp;
  int* ptrox; 

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float x = 1;
  float y = 2;

  printf("the value of x is %f/n", x);
  printf("the value of y is %f/n", y);
  printf("the adress of x is %f/n", &x);
  printf("the address of y is %f/n", &y);

  float* ptrtox = &x;
  float* ptrtoy = &y;

  temp = *ptrtox;
  x = *ptrox;
  y = temp;

  printf("the values of x and y have now swapped ./n");
  printf("the value of x is now %f, and the value of y is now %f. /n", x, y);
}
