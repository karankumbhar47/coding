#include <stdio.h>
#include <stdbool.h>

global[10][10]JHO

bool SoS(int n, int sum,int* array){
   printf("%d\n",sum);
   if(sum==0){
        printf("%d",n);
        return true;
   }
   if(n==0){
        return false;
   }
   if(array[n-1]<=sum){
        return( SoS(n-1,sum-array[n-1],array) || SoS(n-1,sum,array));
   } 
   return SoS(n-1,sum,array);
}

int main(){
    int array[10] = {1,2,3,4,5,66,7,8,9,15};
    int sum ;
    scanf("%d",&sum);
    if (SoS(10,sum,array)==true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

}