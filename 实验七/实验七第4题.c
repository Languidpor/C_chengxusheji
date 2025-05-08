#include<stdio.h>
#define M 3
#define N 4
main()
{
	int x,k,j,com,col,t;
	int a[M][N]={12,1,56,34,10,2,45,3,9,7,4,65};
	for(k=0;k<M;k++)
	{ for(j=0;j<N;j++)
	   printf("%3d",a[k][j]);
	  printf("\n");
	}
	printf("\n");
	x=a[0][0]; com=0; col=0;
	for(k=0;k<M;k++)
	 for(j=0;j<N;j++)
	  if(x>a[k][j])
	   { com=k; col=j; x=a[k][j];}  
	for(k=0;k<N;k++)
	  { t=a[com][k]; a[com][k]=a[M-1][k]; a[M-1][k]=t;}
	for(k=0;k<M;k++)
	  { t=a[k][col]; a[k][col]=a[k][N-1]; a[k][N-1]=t;}
	for(k=0;k<M;k++)
	{ for(j=0;j<N;j++)
	   printf("%3d",a[k][j]);
	  printf("\n");
	}
} 
