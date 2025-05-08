#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((j>=0)&&(t>a[j]))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
}

void main()
{
	int a[10],i;
	printf("\nEnter 10 number:");
	for(i=0;i<=9;i++)
	  scanf("%d",&a[i]);
	sort(a,10); 
	for(i=0;i<10;i++)
	  printf("%5d",a[i]);
}
