#include<math.h> 
main()
{ int n,m,t,x;
  scanf("%d",&x);
  for(n=100;n<x;n++)
   { t=n; m=0;
     while(t!=0)
      { m=m*10+t%10;
        t/=10;
	  }
	 if(m==n)
	  { for(t=2;t<n;t++)
	      if(n%t==0) break;
	    if(t>=n)    printf("%5d",n); 
	  }
   }
}
