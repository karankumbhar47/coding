#include <iostream>

using namespace std;

class complex
{

public:
    int a, b;
    void giveAddtion(complex num1, complex num2)
    {
        display((num1.a), (num1.b));
        display((num2.a), (num2.b));
        add(num1, num2);
    }
    void display(int a1, int b1)
    {

        cout << "Your complex number is :- " << a1 << " + " << b1 << "i" << endl;
    }
    void add(complex num1, complex num2)
    {
        cout << "Addtion of two complex number is :- " << ((num1.a) + (num2.a)) << " + " << ((num1.b) + (num2.b)) <<"i"<< endl;
    }
};

int main()
{
    complex num1, num2,num3;
    num1.a = 3;
    num1.b = 5;
    num2.a = 4;
    num2.b = 6;
    num3.giveAddtion(num1,num2);
    return 0;
}