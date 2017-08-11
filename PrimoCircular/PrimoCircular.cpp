#include <iostream>
#include <math.h>

int main()
{
  int p[3] = {1, 9, 7};
  int temp[3] = {0};
  int n = 0;
  int k=0;
  bool prc = true;

  for (int i=0; i<3; i++)
  {
    k=1;
    n = p[2];

    for (int j=1; j<3; j++)
    {
      n += p[k] * (pow(10,j));
      k--;
    }

    for (int l=2; l<n; l++)
    {
      if (n%l == 0)
      {
        std::cout<<n<<" No es primo"<<std::endl;
        prc = false;
        break;
      }
    }

    if (prc == false)
    {
      std::cout<<"No es primo circular"<<std::endl;
      break;
    }
    else
      std::cout<<n<<" Es primo "<<std::endl;

    temp[0] = p[2];

    for (int l=0; l<2; l++)
      temp[l+1] = p[l];

    for (int l=0; l<3; l++)
      p[l] = temp[l];

    n=0;
  }

  if (prc == true)
    std::cout<<"Es primo circular"<<std::endl;
}
