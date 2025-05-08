#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0&&a[j]>t)    /*a[0]~a[i-1]中比a[i]值大的元素都后移一位*/
		{ a[j+1]=a[j];j--; }
		a[j+1]=t; 
	}
}

void main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1};
	int i;
	sort(a,10);
	for(i=0;i<10;i++)
	  printf("%5d",a[i]);
}
