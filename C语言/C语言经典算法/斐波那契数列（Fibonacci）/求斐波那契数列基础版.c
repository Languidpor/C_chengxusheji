/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，假如兔子不死，问40个月内每个月兔子的总数为多少？*/ 
#include<stdio.h>
main()
{ long int f1,f2,f3;
  int i;
  f1=f2=1; 
  printf("%-12ld%-12ld",f1,f2);
  for(i=3;i<=40;i++)
  { f3=f1+f2;
    printf("%-12ld",f3);
    if(i%10==0) printf("\n");
    f1=f2;
    f2=f3;
  }
} 
