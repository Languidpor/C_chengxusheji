#include<stdio.h>
int com(char a[],char b[])
{
	int i=0;
	while(a[i]==b[i]&&a[i]!='\0')
	  i++;
	return !(a[i]-b[i]);  
}

void main()
{
	char a[20],b[20];
	int n;
	gets(a);
	gets(b);
	n=com(a,b);
	if(n==0) printf("not");
	else     printf("yes");
} 
