#include<stdio.h>
void conj(int a[],int na,int b[],int nb,int c[])
{
	int i=0,j=0,k=0;
	while(i<na&&j<nb)
	  if(a[i]<b[j]) c[k++]=a[i++];
	  else          c[k++]=b[j++];
	while(i<na) c[k++]=a[i++];
	while(j<nb) c[k++]=b[j++]; 
}

void main()
{
	int a[6]={1,2,5,8,9,10};
	int b[6]={1,3,4,8,12,18};
	int c[12],i=6;
	conj(a,i,b,i,c);
	for(i=0;i<12;i++)
	  printf("%-3d",c[i]);
}


