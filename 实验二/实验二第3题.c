#include<stdio.h>
main()
{ int n,k;
  scanf("%d",&n);
  k=0;
  do{ k+=n%10;
      n/=10;
  }
  while(n);
  printf("%d",k);  
}
