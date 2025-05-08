#include<stdio.h>
int fd(int a[],int len,int x)
{
	int i,n;
	for(n=0;n<len;n++)
	  if(a[n]==x) break;
	for(i=n;i<=len-2;i++)
	  a[i]=a[i+1];
	if(n<len)
	  return len-1;
	else
	  return -1;      
}

void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int x,i,n;
	scanf("%d",&x);
	n=fd(a,10,x);
	if(n==-1)
	  printf("Not found!");
	else
	  for(i=0;i<n;i++)
	    printf("%5d",a[i]);  
}
