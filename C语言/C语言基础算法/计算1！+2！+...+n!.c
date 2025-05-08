#include<stdio.h>
main()
{ int i,j,n,p,s=0;
  scanf("%d",&n);
  for(j=1;j<=n;j++)
   {   p=1;
	  for(i=1;i<=j;i++)
	    p=p*i;
	  s+=p;}
  printf("sum=%d\n",s);	
} 
