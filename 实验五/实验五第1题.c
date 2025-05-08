#include<stdio.h>
#include<math.h>

float F(float x)
{
	return 3*x*x*x-3*x*x+x-1;
}
float F1(float x)
{
	return 9*x*x-6*x+1;
}
float newtoon(float x)
{
	float f,f1,x0;
	do {  x0=x;
	      f=F(x0);
	      f1=F1(x0);
	      x=x0-f/f1;
	   } while(fabs(x-x0)>=1e-5);
	  return x; 
}
void main()
{
	float x0;
	scanf("%f",&x0);
	printf("The result=%.2f\n",newtoon(x0));
}
