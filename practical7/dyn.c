#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Function that takes an integer and returns a pointer
int *allocatearray(int n)
{
  return (int *)malloc(n *sizeof(int));
  
}

//function taking pointer to an array then fills every cell with 1
void fillwithones(int *a, int n)
{
  int i;
  for (i =0; i <= n; i++)
    {a[i] =1;
    }
}
//Function to print array elements on screen
void printarray(int *a, int n)
{
  int i;
  for (i =0; i <= n; i++)
    printf("d\n", a[i]);
    }
}
//Function to free allocated memory
void free_pointer(int *p)
{
  free(p);
}

int main(void)
{
  int n =5;
  int *a = (int *)malloc(5*sizeof(int)); //casting to the same type and memory allocation
  // calloc, int *a = (int *)malloc(n, sizeof(int));
  if(a == NULL)
  {
    exit(1);
  }
  for (i =0; i <= n; i++)
  {
    a[i] =1;
  }
  
  //reallocating a 
  a = realloc(a, 6*sizeof(int);
  
  free(a);
  a = NULL;
  return 0;
}
