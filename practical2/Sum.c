#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   double sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1=sum1+1.0/i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2 = sum2 + 1.0/(double)i;
   }

   printf(" Sum1=%.16lf\n",sum1);
   printf(" Sum2=%.16lf\n",sum2);

/* Find the difference */
   diff = /* ?? */

   printf(" Difference between the two is %.16lf\n",diff);

}
