#include <stdio.h>

int main()
{
   int div = 3;
   for( int i = 1; i <= 100;i++)
      {
         if(i%div == 0)
         {
            printf("%i \n",i);
         }
      }
}
