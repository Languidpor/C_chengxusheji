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
	  c[i]=0;              /*����c�и�Ԫ�ؾ�ӵ��0��*/ 
	for(i=0;i<50;i++)
	  c[a[i]]++;           /*ÿ����һ��Ԫ�ؾͰ����ŵ���ӦԪ��Ⱥ��*/ 
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
