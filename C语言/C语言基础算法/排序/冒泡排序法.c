#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		  if(a[j]>a[j+1])
		    { t=a[j];a[j]=a[j+1];a[j+1]=t; }
	}
}

main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1};
	int i;
	sort(a,10);
	for(i=0;i<10;i++)
	  printf("%5d",a[i]);
}
