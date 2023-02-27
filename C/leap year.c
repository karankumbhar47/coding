#include <stdio.h>
int main() {
   int year;
   printf("Enter the year\n");
   scanf("%d",&year);
   if (year%4==0 && year%100==0 && year%400==0  ){
       printf("This is leap year\n");
   }
   
   else if(year%4==0 && year%100!=0){
printf("This is leap year\n");
   }
   else if(year%4!=0){ 
 printf("This is not a leap year\n");
}
 else if(year%4==0 && year%100==0 && year%400!=0){ 
 printf("This is not a leap year\n");
}
   return 0;
}