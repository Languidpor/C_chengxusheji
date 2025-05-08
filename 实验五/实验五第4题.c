#include<stdio.h>
#include<math.h>

float F(float x)
{
	return 2*x*x*x-4*x*x+3*x-6;
}
float Chordcut(float a,float b)
{ float c;
  do{ c=(a*F(b)-b*F(a))/(F(b)-F(a));
      if(F(c)*F(a)<0) b=c;
      else            a=c;
    } while(fabs(F(c))>1e-4);
   return c; 
}

void main()
{
	printf("The result=%.2f\n",Chordcut(0,3));
}
