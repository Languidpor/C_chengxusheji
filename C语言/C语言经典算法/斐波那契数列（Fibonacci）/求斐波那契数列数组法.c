/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，假如兔子不死，问40个月内每个月兔子的总数为多少？*/ 
#include<stdio.h>
main()
{ int n;
  long int f[40]={1,1};
  for(n=2;n<40;n++)
   f[n]=f[n-2]+f[n-1];
  for(n=0;n<40;n++)
  { if(n%10==0) printf("\n");
    printf("%-12ld",f[n]);
  }  
} 
