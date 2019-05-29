#include <stdio.h>
#include <string.h>

int main()
{
  int i;
  int x;
  char alph1[26];
  char alph2[26] = "abcdefghijklmnopqrstuvwxyz";
  for (i = 0; i <= 25; i++)
  {
    alph1[i] = 'a' + i;
  }
  printf("%s\n", alph1);
  printf("%s\n", alph2);
  if (strcmp(alph1, alph2) == 0) 
  {
 	printf("the strings are the same .\n");
  }
  else 
  {
    printf("the strings are not the same .\n");
  }

  // uppercase
  for (int x = 0; x <= 25; x++)
  {
    alph2[x] = alph2[x] - 32;
  }
  printf("%s\n", alph1);
  printf("%s\n", alph2);
  if (strcmp(alph1, alph2) == 0)
  {
 	printf("the strings are the same .\n");
  }
  else
  {
    printf("the strings are not the same .\n");
  }

}
