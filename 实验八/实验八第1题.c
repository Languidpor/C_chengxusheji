#include<stdio.h>
void main()
{
	int a[11],x,i;
	printf("Enter 10 Integers:\n");
	for(i=1;i<=10;i++)
	  scanf("%d",&a[i]);
	printf("Enter x: ");  scanf("%d",&x);
	a[0]='\0';
	i=10;
	while(x!=a[i])  i--;  
	if(x>0)
	  printf("%5d 's position is %4d\n",x,i);
	else
	  printf("%d is not found!\n",x);
 } 
