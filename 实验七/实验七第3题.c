#include<stdio.h>
void main()
{
	int data[10];
	int j=0;
	while(j<10)
	{
		scanf("%d",&data[j]);
		j++;
	}
	for(j=0;j<10;j++)
	 {  
	    if(data[j]!=3)     continue;
	 	else               printf("3 is the position of %d\n",j); 
	 	break;
	 }
	if(j==10)
	  printf("not found!\n");
}
