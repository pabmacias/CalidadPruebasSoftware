#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void generate(int pos, int len, int num[], int base[])
{
  if (pos < len)
  {
    int cpy[len];
    for (int i = 0; i < len; i++)
      cpy[i] = num[i];
    for (int i = 0; i < len; i++)
    {
      cpy[pos] = base[i];
      generate(++pos, len, cpy, base);
    }
  }
  else
  {
    int num1 = 0;
    int power = 1;

     for (int i = 0; i < len; i++)
     {
       for (int i = 0; i < len; i++)
       {
         power *= 10;
       }
        num1 += num[i] * power;
        power=1;
      }

    printf("%d \n", num1);
  }
}

int main()
{
  int p[3] = {1, 9, 7};
  int n = 0;
  int k=1;
  int prc = 1;
  int temp1 = 0;
  int temp2 = 0;

  for (int i=0; i<3; i++)
  {
    n = p[2];
    for (int j=1; j<3; j++)
    {
      n += p[k] * (10*j+1);
      printf("%d * (%d*%d+%d)\n", p[k],10,j,1);
      printf("%d \n", p[k] * (10*j));

      k--;

    }

    //printf("%d \n", n);


    for (int l=2; l<n; l++)
    {
      if (n%l == 0)
      {
        printf("No es primo \n");
        prc = 0;
        break;
      }
    }

    if (prc == 0)
    {
      printf("No es primo circular \n");
      break;
    }

    k=2;
    temp1 = p[0];

    int num[3] = {0};

    generate(0, 3, num, p);
  }

}
