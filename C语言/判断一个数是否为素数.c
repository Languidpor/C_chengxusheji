#include<math.h>
main()
{ int m,i,k;
  scanf("%d",&m);
  k=(int)sqrt(m);
  for(i=2;i<=k;i++)
   if(m%i==0)break;
  if(i>k)printf("%d is a prime number\n",m);
  else   printf("%d is not a prime number\n",m);
}
