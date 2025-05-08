#include<stdio.h>
seek(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	  if(x==a[i])
	    return i;
	  else
	    return -1;  
}

main()
{
	int a[10]={1,4,6,9,13,16,19,28,40,100};
	int x,y;
	scanf("%d",&x);
	y=seek(a,10,x);
	if(y!=-1) printf("%d\n",y);
	else      printf("Not found!\n");
}
