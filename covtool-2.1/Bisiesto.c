#include <stdio.h>

int main(int b, char** numv)
{
  int d=365;

  printf("%d \n",b);

  if (b%4==0)
  {
    d=366;
    printf("El año %d es biciesto \n", b);
  }
}
