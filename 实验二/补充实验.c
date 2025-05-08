#include<stdio.h>
main()
{ int cj;
  scanf("%d",&cj);
  if(cj>=60) 
    if(cj>=90) printf("A\n");
      else if(cj>=80) printf("B\n");
        else if(cj>=70) printf("C\n");
          else printf("D\n");
  else printf("E\n");
      
}
