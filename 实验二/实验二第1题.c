#include<stdio.h>
main()
{ int a,b,c,max;
  printf("Enter three integers:");
  scanf("%d,%d,%d",&a,&b,&c);
  if(a>=b) max=a;
  else max=b;
  if(c>=max) max=c;
  printf("max of the three numbers is %d",max); 
 } 
