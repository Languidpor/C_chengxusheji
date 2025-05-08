#include<string.h>
#include<stdio.h>
void main()
{
	int i;
	char a[20],b[10];
	gets(b);
	i=0;
	while(a[i]=b[i])
	  i++;
	puts(a);  
}

