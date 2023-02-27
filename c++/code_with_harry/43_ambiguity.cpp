#include<iostream>

using  namespace std;

class base1{
    public:
        void greet(){
            cout<<"how are you!!!"<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"Kaise ho!!!"<<endl;
        }
};

class derived : public base1 , public base2{

};`


int main()
{
    
    return 0;
}