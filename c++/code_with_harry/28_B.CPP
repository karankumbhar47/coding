#include<iostream>

using  namespace std;
class C2;

class C1{
    int val1;
    friend void swapPrivateData(C1 &,C2 &);
    public:
        void indata(int a){
            val1 =a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};


class C2{
    int val2;
    friend void swapPrivateData(C1 &,C2 &);
    public:
        void indata(int a){
            val2= a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

void swapPrivateData(C1 &a, C2 &b){
    int temp= a.val1;
    a.val1 = b.val2;
    b.val2=temp;

}

int main()
{
    
    
    C1 a;
    C2 b;
    a.indata(3);
    b.indata(4);
    cout<<"After chaning :- " <<endl;
    swapPrivateData(a,b);
    a.display();
    b.display();
    return 0; 
}