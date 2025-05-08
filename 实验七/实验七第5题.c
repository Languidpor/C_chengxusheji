#include<stdio.h>
void yhtri(int a[20][20],int n)
{ 
    int i,j;
    for(i=0;i<n;i++)
      a[i][0]=a[i][i]=1;
	for(i=2;i<n;i++)
	  for(j=1;j<i;j++)
	    a[i][j]=a[i-1][j-1]+a[i-1][j];
}

main()
{
	int a[20][20],i,j,n;
	scanf("%d",&n);
	yhtri(a,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		  printf("%4d",a[i][j]);
		printf("\n");
	}
}
