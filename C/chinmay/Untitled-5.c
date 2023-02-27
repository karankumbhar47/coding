#include <stdio.h>
int main()
{
    int m,n,p; 
    printf("Enter the value of M\n");
    scanf("%d",&m);
    printf("Enter the value of N\n");
    scanf("%d",&n);
    p=m;
    m=n;
    n=p;
    printf("m=%d n=%d\n",m,n);
    return 0;
}