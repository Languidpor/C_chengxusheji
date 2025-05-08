#include<stdio.h>
main()
{ int a,b;
  int gcf(int m,int n);
  scanf("%d,%d",&a,&b);
  printf("%d\n",gcf(a,b));  
}

int gcf(int m,int n)
{ int r;
  while(n!=0)
   { r=m%n;            /*Õ·×ªÏà³ý·¨*/ 
     m=n;
     n=r; 
   }
  return m; 
}
