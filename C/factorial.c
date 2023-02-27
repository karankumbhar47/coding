#include <stdio.h>
int main()
{
    int a, c, i;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (i = 1; i != a; ++i)
    {
        c = a * i;
    }
    printf("value of a factorial is %d\n", c);
    return 0;
}
