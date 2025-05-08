#include<stdio.h>
f(int m,int n)
{
	if(!(m%n)) return n;
	else       return f(n,m%n);
}

main()
{
	printf("%d",f(21,15));
}
