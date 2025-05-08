#include<stdio.h>
main()
{ int a,b,c;
  a=b=c=1;
  c+=b+=a; 
  printf("Some output:%d£¬%d£¬%d\n",a,b,c);
 } 
