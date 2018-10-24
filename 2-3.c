#include<stdio.h>
int Maxsubsequencesum( int A[], int N)
{
int Thissum, Maxsum,i,j;
Maxsum=0;
for(i=0;i<N;i++)

  {
    Thissum=0;
    for(j=1;j<N;j++)
    {
      Thissum+=A[j];
    if(Thissum >Maxsum)
    Maxsum=Thissum;}
  }
  return Maxsum;
}
int main()
{
  int b,c;
  int a[b];
  scanf("%d",&b);
  c=Maxsubsequencesum(a,b);
  printf("%d\n",c);
	return 0;
}