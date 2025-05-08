#include<stdio.h>
void delnum(char s[])
{
	int i,j;
	for(i=0,j=0;s[i]!='\0';i++)
	  if(s[i]<'0'||s[i]>'9')
	  { s[j]=s[i];j++; } 
	s[j]='\0';  
} 

void main()
{
	char item[80];
	gets(item);
	delnum(item);
	printf("\n%s",item);
}
