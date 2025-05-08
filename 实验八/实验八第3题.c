#include<stdio.h>
void selsort(int a[],int n)
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
	int a[10]={6,8,9,12,16,-3,90,-9,10,1},i;
	selsort(&a[2],6);
	for(i=0;i<10;i++)
	  printf("%5d",a[i]);
}
