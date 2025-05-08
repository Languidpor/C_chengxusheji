#include<stdio.h>
#include<string.h>
void fun(char x[])
{
	int i,j;
	for(i=0;x[i];i++)
	{
		if('0'<=x[i]&&x[i]<='9')
		{
			j=strlen(x);
			while(j>i)
			{
				x[j]=x[j-1];
				j--;
			}
			x[i]='$';
			i++;
		}
		else  continue;
	}
	x[i]='\0';
}

main()
{
	char a[20]={"a1b34cdef5"};
	fun(a);
	puts(a);
} 
