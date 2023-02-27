#include <stdio.h>
int main()
{
    int a=3,b;
        while(a<=300 )
        {
            b=2;
            while(a%b!=0 && b<a)
            {
            b++;
            }
            if(a==b){
             printf("%d\n",a);
            }
            a++;
        }

    return 0;
}