#include<stdio.h>
main()
{ int n,i=0;
  for(n=5000;n<=8000;n++)
    if(n/1000-(n/100%10)-(n%100/10)-n%10<=0) continue;
     else 
	   {  ++i;      printf("%8d",n);
          if(i%10==0)        printf("\n");
       }
 } 
