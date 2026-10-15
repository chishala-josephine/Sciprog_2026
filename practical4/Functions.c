#include<stdio.h>
#include<math.h>

#define N 12

float degtorad(float degang); //function converting from degree to rad
float traprule(float TanArr[N+1]);
float TanArr[N+1];  //Global array

//Main
int main(void)
{
	int i;
	float deg;
	for (i=0; i <= N; i++)
	{
		deg = i*5.0;   //Loop counter
		TanArr[i] = tan(degtorad(deg));
		printf("x = %f, f(x) = %f\n", deg, TanArr[i]);
		
	}
	printf("The trap rule gives us %f\n", traprule(TanArr));
	printf("The actual answer is %f\n", log(2.0));
	return 0;
}
//Define what the functions is doing

float degtorad(float degang)
{
	return ((M_PI *degang) / 180.0);
}
float traprule(float TanArr[N+1])
{
	float area;
	int i;
	area = TanArr[0] + TanArr[N];
	for (i=1; i<N; i++)
	{
		area+=2*TanArr[i];
	}
	float mult_rad = degtorad((60-0)) / (2*N);
	area*=mult_rad;
	return area;
}
