#include<iostream>

using namespace std;

//we are using template for generalizing class for any type of data type
template<class T>
class Airthematic{
    private:
        T operand1;
        T operand2;
    public:
    Airthematic(T operand1, T operand2);
    T add();
    T sub(); 
};

template<class T> 
Airthematic<T>:: Airthematic(T op1, T op2){
    this->operand1 = op1;
    this->operand2 = op2;   //we are using this to show members of same class  
};

template<class T>
T Airthematic<T>:: add(){
    T c;
    c = operand1+operand2;
    return c;
}

template<class T>
T Airthematic<T>:: sub(){
    T c;
    c = operand1 - operand2;
    return c;
};


int main(){
    Airthematic<int> ar(10,5);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;   
    Airthematic<float> arf(10.4,5.4);
    cout<<arf.add()<<endl;
    cout<<arf.sub()<<endl;   
}