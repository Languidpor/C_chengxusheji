#include<stdio.h>
void main()
{ 
  int a[3][3]={{3,8,12},{4,7,10},{2,5,11}},i,j,k,t;
  for(j=0;j<3;j++)
   for(k=0;k<2;k++)
    for(i=0;i<2-k;i++)
     if(a[i][j]>a[i+1][j])
      t=a[i][j],a[i][j]=a[i+1][j], a[i+1][j]=t;
  for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
      printf("%3d",a[i][j]);
    printf("\n");  
  }
}

