#include<iostream>//--> this is system defined headerfile
// #include"5.cpp"//--> this is user defined header file
// #include"5.h"//--> this is user defined header file. this should present in current directory
using  namespace std;

int main()
{
    int a,b;
    cout<<"Enter tne value of a"<<endl;
    cin>>a;
    cout<<"Enter tne value of b"<<endl;
    cin>>b;
    cout<<"operators"<<endl;
    cout<<"add a+b "<<a+b<<endl;
    cout<<"subd <a-b "<<a-b<<endl;
    cout<<"mul a*b "<<a*b<<endl;
    cout<<"div a/b "<<a/b<<endl;//--output of two int is int
    cout<<"reminder a%b "<<a%b<<endl;
    cout<<"increment after a++ "<<a++<<endl;
    cout<<"increment before ++a "<<++a<<endl;
    cout<<"decrement after a-- "<<a--<<endl;
    cout<<"decrement before --a "<<--a<<endl;
    cout<<endl;

    //assignment operators
    // int a=3, b=5;
    // char c='n';

    //comprison operators
    cout<<"Following are types of comparison operators"<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<endl;


    //logical operato3
    cout<<"logical operator"<<endl;
    cout<<"logical operator and && "<<((a==b) && (a<=b)) <<endl;
    cout<<"logical operator or || "<<((a==b) || (a<=b)) <<endl;
    cout<<"logical operator not ! "<<!((a==b) || (a<=b)) <<endl;
    return 0;
}