#include<stdio.h>
/* #include<string.h> */             /*�õ��ַ�������ʱ��ʹ��*/ 
#include<ctype.h>
main() 
{ char s[100]; int i,num=0;
  gets(s);
  for(i=0;s[i]!='\0';i++)       /*����Ҳ����д�� for(i=0;i<strlen(s);i++) */ 
  if(isalpha(s[i])&&(isspace(s[i+1])||s[i+1]=='\0'))
    num++;
  printf("count=%d\n",num);  
}
