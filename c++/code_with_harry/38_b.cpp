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

class derived : private base{
    int data3;
    public: 
        void process();
        void display();
};


void derived :: process(){
    setData();
    data3=data2* getdata1();//we can't access it directly so we are calling it by function
    //we can call private data of derived class inside 
    //functions of derived class
}

void derived::display(){
    cout<<"value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<< data2  <<endl;
    cout<<"value of data3 is " << data3 <<endl;

}
int main()
{
    derived der;
    // der.setData();//we can't call it as it is a private data
    der.process();
    der.display();   
    return 0;
}

