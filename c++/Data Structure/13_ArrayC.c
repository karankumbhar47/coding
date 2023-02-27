#include<stdio.h>

int main(){
    int array[5];
    for (int  i = 0; i < 5; i++) printf("%d\n",&array[i]);
    
    int n;
    scanf("%d",&n);
    int arr[n] ;
    for (int  i = 0; i < n; i++) printf("%d\n",&arr[i]);
    return 0;
}