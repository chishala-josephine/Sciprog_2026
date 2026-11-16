#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Creating the iterative function from the pseudo code
int gcd_iterative(int a, int b)
{
  int temp;
  while(b!= 0)
  { temp = b;
    b = a % b;
    a =temp;
  }
  return a;
}
//Creating the recursive function
int gcd_recursive(int a, int b)
{ 
  if(b==0)
  { return a;
  }
  return gcd_recursive(b, a % b);
}

int main(void)
{ //Generating two random numbers and calculating their gcd
  
  int upper_rand = 100;
  int lower_rand =1;
  srand(time(NULL)); //seeding the random numbers with the current time
  // random numbers for a and b
  int a = rand() % (upper_rand - lower_rand) + lower_rand;
  int b = rand() % (upper_rand - lower_rand) + lower_rand;
  
  printf("a is %d and b is %d\n", a, b);
  printf("gcd_iterative is %d\n",gcd_iterative(a,b));
  printf("gcd_recursive is %d\n",gcd_recursive(a,b));
  
  //Saving the output to a file (writing to a file)
  FILE* fp;
  fp = fopen("gcd.text", "w"); //file pointer
  fprintf(fp, "a is %d and b is %d\n", a, b);
  fprintf(fp, "gcd_iterative is %d\n",gcd_iterative(a,b));
  fprintf(fp, "gcd_recursive is %d\n",gcd_recursive(a,b));
  return 0;
}
