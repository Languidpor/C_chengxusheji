#include<stdio.h>
void sift(int a[])
{ int i,j;
  for(i=2;i<=sqrt(100);i++)
   for(j=i+1;j<=100;j++)
    if(a[i]&&a[j])
     if(a[j]%a[i]==0)
       a[j]=0;
}

main()
{ int i,n=0,a[101];
  for(i=2;i<=100;i++) a[i]=i;
  sift(a);
  for(i=2;i<=100;i++)
   { if(a[i]!=0)
   	 { printf("%5d",a[i]);
   	   n++;
	 }
	 if(n%10==0) printf("\n"); 
   }
}
