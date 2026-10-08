#include<stdio.h>
#include<math.h>

int main(void)
{       
        //Declaring valuables and intialising
	int N = 12;
        double a = 0;
        double b = M_PI/3;
        double int_value = 0;
        double prefactor = (b-a)/(2*N);

	int_value += tan(a) +tan(b); //sums the first and last terms

	double step_size = (b-a)/N;   //produces number of equidistant points between a and b, in this case11 points

	//looping
	int i =0;
	double x_n;

	for(i=1; i<N; i++)
	{
		x_n = a + i*step_size;  //loop variable
		int_value += 2*tan(x_n); //This would be the same as intvalue+=2*tan(a +i(b-a)/N)

	}

	int_value *= prefactor;

	//comparing with the actual answer
	printf("The estimate is %.16lf\n", int_value);
	printf("The actual answer is %.16lf\n", logf(2));

	return 0;
}
