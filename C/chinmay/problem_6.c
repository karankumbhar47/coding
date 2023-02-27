#include <stdio.h>

int main()
{
    float a, b, c;
    printf("enter the value of a\n");
    scanf("%f", &a);
    printf("enter the value of b\n");
    scanf("%f", &b);
    printf("enter the value of c\n");
    scanf("%f", &c);
    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        if (a != b && b != c && b != a)
        {
            printf("ur triangle is scalene\n");
        }
        else if (a == b && b == c && b == a)
        {
            printf("ur triangle is equilateral and isosclaes\n");
        }
        else if ((a == b) || (a == c) || (b == c)  )
        {
            printf("ur triangle is isosclaes\n");
        }
        if ((c * c == a * a + b * b) || (a * a == b * b + c * c) || (b * b == a * a + c * c))
        {
            printf("ur triangle is right angle triangle\n");
        }
    }
    else
    {
        printf("This is not a triangle \n");
    }
    return 0;
}