#include<stdio.h>
int fun(int a[],int b[])
{
	int i,j=0;
	for(i=0;a[i];i++)
	{ if(i%2==0) continue;
	  if(a[i]>10)
	    b[j++]=a[i];
	}
	return j;
}

void main()
{
	int a[10]={3,15,32,23,11,4,5,9},b[10];
	int i,x;
	x=fun(a,b);
	for(i=0;i<x;i++)
	  printf("%d\t",b[i]);
	printf("\n%d",x);  
}
