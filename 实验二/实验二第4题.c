#include<stdio.h>
main()
{ int n,m,p;
  for(n=100;n<1000;n++)
  { if(n%37==0) 
      { m=n;
        m=m/100+m%100*10;
		  if(m%37==0)
		    { p=m;
		      p=p/100+p%100*10;
		        if(p%37==0) printf("%6d",n);
			 } 
		   
		 
	  }
  }
}
