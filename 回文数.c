#include<stdio.h>
int main()
{
  int a[5];
  int b,i;
  do{
  printf("请输入一个五位数：");
  scanf("%d",&b);
 if(b<10000||b>99999)
  printf("这不是一个五位数！！\n"); 
  }while(b<10000||b>99999);
for(i=0;i<=5;i++)
  {
      a[i]=b%10;
      b/=10;
  }
if(a[0]==a[4]&&a[1]==a[3])
    printf("这是一个回文数\n");
else
    printf("这不是一个回文数\n")
return 0;
}