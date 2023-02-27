#include<iostream>

using  namespace std;

int sum(int a,int b){//--> why we are writting int 
    float c= a+b;
    return c;
}
//function prototype--> this will find function in below lines as it was not found in above lines
// type function-name (argument);--> sytax of prototype  (this will give garantee of function exitance in next few line )
//time saving
void g();//--> acceptable;
void g(void);//--> taking nothing - void and returning nothing --> void
// int sum(int a, b);--> not acceptable 
int sum(int ,int); //-->acceptabe
//num1 and num2 are actual parameter 
//a and b are formal parameter
//formal parameter taking values form actual parameter
// even name of formal aaand actual parameter same program will not show any error
int main()
{
    int num1,num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"sum of num1 and num2 is "<<sum(num1,num2); 

    g();//--> without function prototype this will throws an error

    return 0;
}

// int sum(int a,int b){
//     int c= a+b;      --> you will get error if you will put function at end 
//     return c;        --> function prototype is alternative to this
// }

void g(){
    cout<<"\nhello,good morning";
}