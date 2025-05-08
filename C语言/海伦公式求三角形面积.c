#include<stdio.h>
#include<math.h>
main( )
{ double a,b,c,s,area; 
  scanf("%lf,%lf,%lf",&a,&b,&c);
  s=(a+b+c)/2.0;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area=%7.2lf\n",area);
}
