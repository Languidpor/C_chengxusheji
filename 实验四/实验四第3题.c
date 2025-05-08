#include<stdio.h>
void main ()
{ int prime(int m);
  int k,j,n,limit;
  do
   { 
     printf("Input a number>=6:");
     scanf("%d",&limit);
   }
  while(limit<6);
  for(n=6;n<=limit;n+=2)
    for(k=3;k<n/2;k+=1)
      if(prime(k))
        { j=n-k;
          if(prime(j))
            { printf("%d=%d+%d\n",n,k,j);
              break;
			}
		}
}

int prime(int m)
{ 
  int g,h; h=(int)sqrt(m);
  for(g=2;g<=h;g++)
    if(m%g==0) return 0; 
  return 1;  
}
