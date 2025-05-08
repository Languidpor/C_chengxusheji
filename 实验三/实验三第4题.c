#include<stdio.h>
main()
{ int i,j,p,s=0;
  for(j=1;j<=10;j++)
   {   p=1;
	  for(i=1;i<=j;i++)
	    p=p*i;
	  s+=p;}
  printf("sum=%d\n",s);	
} 
