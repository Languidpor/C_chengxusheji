#include<stdio.h>
main()
{ long int a,b,m;
  int gcf(int m,int n);
  scanf("%d,%d",&a,&b);
  m=a*b/gcf(a,b);
  printf("���Լ����%ld����С��������%ld\n",gcf(a,b),m);
   
}

int gcf(int m,int n)
{ int r;
  while(n!=0)
   { r=m%n;            /*շת�����*/ 
     m=n;
     n=r; 
   }
  return m; 
}
