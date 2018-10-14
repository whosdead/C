#include<stdio.h>
long int Fib(int N)
{
  if(N<=1)
  return 1;
else
  return Fib(N-1)+Fib(N-2);
}
int main()
{
  int a,b;
  scanf("%d",&a);
  b=Fib(a);
  printf("%d",b);
  return 0;
}