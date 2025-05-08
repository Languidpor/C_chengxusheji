#include<stdio.h>
#include<stdlib.h>
void getdata(int a[])
{
  int i;	
  for(i=0;i<50;i++)
    a[i]=rand()%10;
}

void stat(int a[],int c[])
{
	int i;
	for(i=0;i<50;i++)
	  c[i]=0;              /*数组c中各元素均拥有0个*/ 
	for(i=0;i<50;i++)
	  c[a[i]]++;           /*每遇到一个元素就把它放到对应元素群中*/ 
}

void main()
{
	int i;
	int a[50],c[10];
	getdata(a);
	stat(a,c);
	for(i=0;i<10;i++)
      printf("%d %d\n",i,c[i]);
}
