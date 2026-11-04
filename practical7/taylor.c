#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//writing a factorial function
int factorial(int n)
{
  if (n==0)
  {
    return 1;
  }
  return n*factorial(n-1);
}
double poly_term(double x, int n)
{
  return pow(x,n)/factorial(n);
}
int main(void)
{
  int order;
  double x= 1;
  
  printf("Please input the order\n");
  scanf("%d", &order);
  //allocating dynamic array
  double *term = (double*)malloc(order * sizeof(double));
  //check malloc
  if (term ==NULL)
  {
    printf("Didn't work\n");
    exit(1);
  }
  
  int i;
  double e=0;
  
  for(i =0; i <= order; i++)
  {
    term[i] = poly_term(x, i);
    e+=term[i];
  }
  
  printf("%.16lf\n",e);
  //free term
  free(term);
  term = NULL;
  return 0;

}

//Breaks at 35 because it is above the scope of what can be reasonably be represented
