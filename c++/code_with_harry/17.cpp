#include<iostream>

using  namespace std;
// note:- don't use inline function in static variable and reccursion function
//        loop,if else don't use inline
// inline  is request to compiler 
// write default argument on right side side

// int strlen(const char *p){
    //this will make sure that your string will not change during function
// }






inline int p(int a, int b){//as we are calling this fumction too many times 
            static int  c=0;
            c=c+1;
            return a*b+c;    //this will copy a and b and save product of a and b 
        }                  // and return every time 
                           //instead we can write inline and it will save in memory value of a*b and return it
                           // but we can use inline only for function where woek dne tends to zero
                           //don't use it for long function
//static value will execute only one time that means in above 
// program c=0 only for one time and after that it will increase by 1                  
float moneyaRecieved(int currentMoney, float rate=1.09)
{
    return currentMoney * rate ;
}

int main()
{
    // int a,b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a;
    // cin>>b;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;
    // cout<<"Product  of a and b "<<p(a,b) <<endl;

    int money=100;
    float rate=1.02;

    cout<<"if you have "<<money<<" in your bank account, you will recieve "<<moneyaRecieved(money,rate);
    cout<<"if you have "<<money<<" in your bank account, you will recieve "<<moneyaRecieved(money);



    return 0;
}