#include<stdio.h>
bisearch(int a[],int n,int x)
{
	int low,mid,high;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x==a[mid]) break;
		else if(x<a[mid]) high=mid-1;
		     else         low=mid+1;
	}
	if(low<=high)
	  return mid;
	else
	  return -1;  
}

void main()
{
	int a[10]={2,4,6,8,10,12,14,16,18,20};
	int x,loc;
	scanf("%d",&x);
	loc=bisearch(a,10,x);
	if(loc>=0)
	  printf("Found:%d\t position:%d",x,loc);
	else
	  printf("Not found:%d",x);  
}
