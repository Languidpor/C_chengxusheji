#include<stdio.h>
int value(long m)
{ long n=0,t=m;
  while(t)
  { n=n*10+t%10;
    t/=10;
  }
  if(n==m) return 1;
  else     return 0;
 } 
 
 void main()
 { long int i;
   for(i=11;i<=999;i++)
     if(value(i)&&value(i*i)&&value(i*i*i))
       printf("%6ld%8ld%10ld\n",i,i*i,i*i*i);
 }
