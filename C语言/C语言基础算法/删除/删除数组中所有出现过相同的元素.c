#include<stdio.h>
int fun(int a[],int n)
{
	int i,j,k,t,m;
	for(i=0;i<n;i++)
	{
		t=a[i];
		for(j=i+1;j<n;j++)
		  if(t==a[i]) break;
		if(j<n)
		{
			for(k=m=0;m<n;m++)
			  if(t!=a[m])
			    a[k++]=a[m];
			n=k;
			i--;    
		}  
	}
	return n;
}

main()
{
	int x[10]={4,31,-23,4,2,5,4,2,50,4},n,i;
	n=fun(x,10);
	for(i=0;i<n;i++)
	  printf("%-5d",x[i]);
}
