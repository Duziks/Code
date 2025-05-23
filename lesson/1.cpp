#include<stdio.h>
#include<math.h>
double calc1(int a)
{
	double x=log(1.618);
	double y=log(a*1.0*sqrt(5));
	return y/x;
}
double calc2(int a)
{
	double x=(a+1)*1.0/2;
	return x;
}
int main()
{
	for(int b=1;b<=100;b++)
	{
		double force=calc2(b);
		double fib=calc1(b);
		printf("b=%d: %10.5f %10.5f\n",b,force,fib);
		// printf("%.5f\n",force);
		// printf("%.5f\n",fib);
		if(force>fib){
			printf("fib good\n");
		}
		else if(force<fib)
		{
			printf("force good\n");
		}
		else{
			printf("euqal\n");
		}
	}
	return 0;
}