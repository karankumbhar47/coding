#include<iostream>

using  namespace std;

class simple {
    int data1;
    int data2;
public:
    simple(int a=0 , int b=9){
        data1=a;
        data2=b;
    }
    void printData(void){
        cout<<"the value of data is "<<data1<<" and "<<data2<<endl;

    }
};




int main()
{
    simple s(1,2);
    s.printData();
    simple s1(1);
    s1.printData();
    simple s2;
    s2.printData();
    return 0;
}