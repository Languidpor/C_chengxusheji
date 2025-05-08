#include<stdio.h> 
int compress(char s[])
{
	int n,k=0,count=0;
	n=k+1;
	while(s[n]!='\0')
	{
		if(s[k]==s[n])  count++;
		else            s[++k]=s[n];
		n++; 
	}
	s[++k]='\0'; 
	return count;
}

void main()
{
	char a[100];
	int count;
	gets(a);
	count=compress(a);
	printf("%s\n",a);
	printf("%d\n",count);
}

