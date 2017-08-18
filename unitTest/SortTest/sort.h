#include <iostream>

class Sorts
{
public:
  virtual void sort(int array[], int n) = 0;
};

class BubbleSort : public Sorts
{
public:
  void sort(int array[], int n)
  {
    int temp;

    for (int i = 0 ; i < ( n - 1 ); i++)
    {
      for (int j = 0 ; j < n - i - 1; j++)
      {
        if (array[j] > array[j+1])
        {
          temp       = array[j];
          array[j]   = array[j+1];
          array[j+1] = temp;
        }
      }
    }
  }
};

class SelectionSort : public Sorts
{
public:
  void sort(int array[], int n)
  {
    int pos_min,temp;

	  for (int i=0; i < n-1; i++)
	  {
	    pos_min = i;

		  for (int j=i+1; j < n; j++)
		  {
		    if (array[j] < array[pos_min])
          pos_min=j;
		  }

      if (pos_min != i)
      {
        temp = array[i];
        array[i] = array[pos_min];
        array[pos_min] = temp;
      }
	   }
  }
};

class InsertionSort : public Sorts
{
public:
  void sort(int array[], int n)
  {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
      key = array[i];
      j = i-1;

      while (j >= 0 && array[j] > key)
      {
        array[j+1] = array[j];
        j = j-1;
      }
      array[j+1] = key;
   }
  }
};
