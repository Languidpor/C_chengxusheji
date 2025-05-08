#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		  if(a[k]>a[j]) k=j;
		t=a[i];
		a[i]=a[k];
		a[k]=t;  
	}
}

void main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1},i;
	sort(a,10);
	for(i=0;i<10;i++)
	  printf("%5d",a[i]);
}
