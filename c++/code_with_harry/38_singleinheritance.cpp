#include<iostream>

using  namespace std;

class base{
    int data1;
    public:
        int data2;
        void setData();
        int getdata1();//as we can't access data1 directly so access it we are making one function to get data1
        int getdata2();
};

void base :: setData(){
    data1=10;
    data2=20;
} 

int  base:: getdata1(){
    return data1;
}

int  base:: getdata2(){
    return data2;
}

class derived : public base{
    int data3;
    public: 
        void process();
        void display();
};


void derived :: process(){
    data3=data2* getdata1();//we can't access it directly so we are calling it by function
}

void derived::display(){
    cout<<"value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<< data2  <<endl;
    cout<<"value of data3 is " << data3 <<endl;

}
int main()
{
    derived der;
    der.setData();
    der.process();
    der.display();   
    return 0;
}