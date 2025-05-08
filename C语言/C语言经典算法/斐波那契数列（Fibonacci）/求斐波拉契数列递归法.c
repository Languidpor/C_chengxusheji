#include<stdio.h>
long fib(int t)
{
	long int c;
	if(t==1||t==2) c=1;
	else          c=fib(t-1)+fib(t-2);
	return c;
}

main()
{
	printf("%10ld",fib(40));
}
