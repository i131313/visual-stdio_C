#include<stdio.h>
#include<math.h>
int main(void)
{
	int i, j;
	double n;
	double x;

	for(i = 10; i <= 30; i += 10)
	{
		printf("@ n = %d \n",i);

		n = (double)i;

		printf("n*logn = %f \n", n*log(n));

		printf("n^2 = %f \n", n*n);

		printf("n^3 = %f \n", n*n*n);

		printf("2^n = %f \n", pow(2, n));   // z = 1   for(k=1;k<=n;k+=1) z = z*2 

		x = 1;

		for(j = 1; j <= n; j+=1)
		{
			x = x * j;
		}
		printf("n! = %f \n", x);

		printf("n^n = %f \n", pow(n, n));

		printf("\n");
	}
	return 0;
}