#include <stdio.h>
void printout(unsigned int n)
{
    if ( n >= 10 ) 
        printout( n/10 );
     printf("%d ", n%10 );
}
int main()
{
    int n;
    scanf("%d", &n );
    printout(n);
    printf("\n");
    return 0;
}