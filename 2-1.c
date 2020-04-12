#include <stdio.h>
int sum(int N)
{
  int i,partialsum;
  partialsum=0;
  for(i=1;i<=N;i++)
    partialsum+=i*i*i;
  return partialsum;
}

int main()
{
  int a,b;
  scanf("%d",&a);
  b=sum(a);
  printf("%d",b);

}