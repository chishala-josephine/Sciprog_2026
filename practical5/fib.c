#include<stdio.h>

void fib(int*a, int*b); //Memory location of the integers a and b
int main(void)
{
	int n;
	printf("please enter a value of n\n");
	scanf("\%d", &n); //returns the memory of n

	if (n<=1)
	{
		printf("n must be greater or equal to 2\n");
		return -1;
	}

	int f0 =0;
	int f1 = 1;
	int i;
	for (i =2; i <=n; i++)
	{
		fib(&f1, &f0);
		printf("%d\n", f1);

	}

	return 0;
}


void fib(int* a, int* b)
{
	int next;
	next = *(a) + *(b); // gives  value stored in a and b
	*b = *a;  //passes the new b to previous a values
	*a = next; //dereferncing operarato same as above

}
