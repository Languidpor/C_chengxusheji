#include<stdio.h>
main()
{ float n=1,m=1;
  for( ;m/(4*n*n+4*n+3)>=1e-5;n++)   
    m=m*4*n*n/(4*n*n-1);    
  printf("%9f\n",2*m);  
} 
