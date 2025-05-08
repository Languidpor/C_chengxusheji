#include<stdio.h>
#include<stdlib.h>
main()
{ int a[10],i,x,flag;
  for(i=0;i<10;i++)
  { a[i]=rand()%100;
    printf("%4d",a[i]);
  }
  printf("\n x=");
  scanf("%d",&x);
  for(i=0;i<=10;i++)
  { if(x==a[i]) 
    printf("position=%d\n",i);
    flag=1;                          /*flag为标志变量*/ 
  }
  if(flag==0) printf("Not found!\n");
}
