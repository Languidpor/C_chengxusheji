#include<stdio.h>
main()
{ int n,a,b,c;
  for(n=1;n<1000;n++)
   { a=n/100;
     b=n/10%10;
     c=n%10;
     if(n/11==a*a+b*b+c*c&&(a==b||a==c||b==c)!=0)
         printf("%5d",n);
   }
}
