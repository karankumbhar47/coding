#include <stdio.h>
int main()
{
    int a=3,b;
        while(a<=300 && b<a)
        {
            b=2;
            if(a%b!=0)
            {
            printf("%d\n",a);
            b++;
            }
            else if(a%b==0){
            a++;
            }
        }
    return 0;
}