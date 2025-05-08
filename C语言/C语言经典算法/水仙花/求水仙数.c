/*打印出所有的“水仙花数 ”，所谓：“水仙花数 ”是指一个三位数，其各位数字的立方和等于该本身。*/
#include<stdio.h>
main()
{ int i,j,k,n;
  printf("Water flower'number is:'");
  for(n=100;n<1000;n++)
  { i=n/100;  
    j=n/10%10;
    k=n%10;
    if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
      printf("%-5d",n);
  }
  printf("\n");
 } 
