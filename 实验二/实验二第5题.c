#include<math.h>
main()
{ int x,y;
  scanf("%d",&x);
   if(x<0) y=0;
    else if(0<=x&&x<10) y=x;
     else if(10<=x&&x<20) y=10;
      else if(20<=x&&x<40) y=-5*x+20;
  printf("%d",y);
}
