#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)//--> this will also accept one argument
    {
        a = x;
        b = y;
    } 

    Complex(int x){
         a=x;
         b=0;
    }

    Complex(void){
         a=0;
         b=0;
    }

    void printNumber()
    {
        cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(3,5);
    c1.printNumber();
    Complex c2(3);
    c2.printNumber();
    Complex c3;
    c3.printNumber();

    return 0;
}