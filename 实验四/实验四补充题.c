#include<stdio.h>
double total(int n,double x)
{ double s=1,t=1;
  int i;
  for(i=1;i<=n;i++)
  { t*=x/i;
    s+=t;
  }
  return s;
}

main()
{ int n;
  double x,s;
  scanf("%d%lf",&n,&x);
  s=total(n,x);
  printf("result=%lf\n",s);
}
