#include<stdio.h>
main()
{ long int a,b,m;
  int gcf(int m,int n);
  scanf("%d,%d",&a,&b);
  m=a*b/gcf(a,b);
  printf("最大公约数：%ld，最小公倍数：%ld\n",gcf(a,b),m);
   
}

int gcf(int m,int n)
{ int r;
  while(n!=0)
   { r=m%n;            /*辗转相除法*/ 
     m=n;
     n=r; 
   }
  return m; 
}
