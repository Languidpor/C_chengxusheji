/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，假如兔子不死，问40个月内每个月兔子的总数为多少？*/ 
#include<stdio.h>
main()
{ long int f1,f2;
  int i;
  f1=f2=1;
  for(i=1;i<=20;i++)
  { printf("%-12ld%-12ld",f1,f2);  
    if(i%5==0) printf("\n");       /*控制输出，每行4个*/ 
    f1+=f2; f2+=f1;
  }
}
