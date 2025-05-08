#include<stdio.h>
#include<math.h>

float F(float x)
{
	return log(x)+x*x;
}
float dichotomy(float a,float b)
{ float m;
  do {  m=(a+b)/2;
        if(F(a)*F(m)<0) b=m;
        else            a=m;
     } while(fabs(F(m))>=1e-4);
    return m; 
}

void main()
{   
	float x;
	x=exp(-1);
	printf("The result=%.2f\n",dichotomy(x,1));
}
