#include <iostream>
#include <math.h>
//#include "gtest/gtest.h"

int number(int n, int k, int p[], int size)
{
  //std::cout<<n<<std::endl;

  for (int j=1; j<size; j++)
  {

    n += p[k] * (pow(10,j));
    k--;

    //std::cout<<n<<std::endl;

  }

  return n;
}

bool primoCircular(bool prc, int p[], int temp[100], int n, int k, int size)
{
  for (int i=0; i<size; i++)
  {
    k=size-2;

    n = number(p[size-1], k, p, size);

    //std::cout<<n<<std::endl;

    if (n<0)
      return false;

    for (int l=2; l<n; l++)
    {
      if (n%l == 0)
      {
        std::cout<<n<<" No es primo"<<std::endl;
        return false;
      }
    }

    temp[0] = p[size-1];

    for (int l=0; l<size-1; l++)
      temp[l+1] = p[l];

    for (int l=0; l<size; l++)
      p[l] = temp[l];

    n=0;
  }

  return true;
}

/*int main()
{
  int p[3] = {1, 9, 7};
  int temp[3] = {0};
  int n = 0;
  int k=0;
  bool prc = true;

  prc = primoCircular(prc, p, temp, n, k);

  if (prc == true)
    std::cout<<"Es primo circular"<<std::endl;
  else
  {
    std::cout<<"No es primo circular"<<std::endl;
  }

}*/
