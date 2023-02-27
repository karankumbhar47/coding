#include<iostream>
int c=45;
using  namespace std;

int main()
{
    // int a,b,c;
    // cout<<"Enter the value of a :- ";
    // cin>>a;
    // cout<<"Enter the value of b :- ";
    // cin>>b;
    // cout<<"sum of a and b is :- "<<a+b<<endl;
    // cout<<"value of local c is :- "<<c<<'\n';//--> default value of local c is zero as c is not assign by any value
    // cout<<"value of global c is :- "<<::c;//--> this is scope resolution operators
    // float d=34.4f;//or 34.4Ff
    // long double e=34.4l;/*--> by default value type of 34.4 is double
    //                     so to pass 34.4 as float just attach f with 34.4 like 34.4f*/  
    // cout<<"the value of d "<<d<<endl<<"the value of e is "<<e<<endl;//--> this gives series of cout 
    // cout<<"the size of 34.4 "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L "<<sizeof(34.4L)<<endl;


    //reference variable
    float x=455;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    //type casting
    int a=45;
    float b=45.677;
    cout<<"the value of a is :- "<<(float)a<<endl;
    cout<<"the value of b is :- "<<(int)a<<endl;
    cout<<"the value of b is :- "<<int(a)<<endl;//--> in both way we can write
    int c=int(b);
    float d=int(b);
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of float d is "<<d<<endl;
    cout<<"the value of a+b is "<<(a+b)<<endl;
    cout<<"the value of float a +int(b) is "<<a +int(b)<<endl;
    cout<<"the value of  a +(int)b is "<<a +(int)b<<endl;
    
    
    
    
    
    
    return 0;
}