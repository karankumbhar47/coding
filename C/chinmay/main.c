#include <stdio.h>
int main()
{
    float amount;
    int hundread, fifty, ten;
    printf("Enter the amount to be withdrawn\n");
    scanf("%f", &amount);
    amount = amount * 100;
    printf("%f", amount);
    hundread = amount / 100;
    int remainder1 = amount % 100;
    fifty = remainder1 / 50;
    int remainder2 = remainder2 % 50;
    ten = remainder2 / 10;
    printf("no, of notes of ten %d\n", ten);
    printf("no, of notes of fifty %d\n", fifty);
    printf("no, of notes of hundread %d\n", hundread);
    return 0;
}