#include<stdio.h>
main()
{ int n,t,m;
   for(n=1001;n<10000;n++)
    { t=n; m=0;
      while(t!=0)
       { m=m*10+t%10;
         t/=10;   
	   } 
	   if(m==9*n)   printf("%d",n);      
    } 	 
 } 
