#include<iostream>

using  namespace std;
//pointer is type of data holds address of other data type
int main()
{
    int a=4;
    int *b=&a;//--> "&a"--> address of a --> star representing pointing operator
    cout<<"address of a :"<<b<<endl;
    cout<<"address of a :"<<&a<<endl;
    //* -->dereference operators
    cout<<"value at address  b :"<<*b<<endl<<"*********************************************************************"<<endl;

    int **c=&b;//--> pointer of pointer(storing address of another pointer)
    cout<<"address of b :"<<c<<endl;
    cout<<"address of b :"<<&b<<endl;
    cout<<"value at address  c(*) :"<<*c<<endl;//--> this is address of b and b is storing address of a soit is showing address of a
    cout<<"value at address  c(**) :"<<**c<<endl;
    cout<<"value at address  b :"<<*b<<endl<<"**********************************************************************"<<endl;
    
    int ***d=&c;
    cout<<"address of c :"<<&c<<endl;
    cout<<"address of c :"<<d<<endl;
    cout<<"value at address  d(*) :"<<*d<<endl;
    cout<<"value at address  d(**):"<<**d<<endl;
    cout<<"value at address  d(***):"<<***d<<endl;
    cout<<"value at address  b :"<<*b<<endl<<"***********************************************************************"<<endl;//--> don't use single quotes as it will show number corresponding to it

    /* 
        address   34     28      20      x
        var.      a     b       c       d
        stored    4     &a      &b      &C
                        *       **      ***
    */   
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}