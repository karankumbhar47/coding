#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y);
    void printNumber()
    {
        cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)
{ // parameterized constructure
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(3, 5);
    a.printNumber();

    // explicit call
    Complex c1 = Complex(5, 5);
    c1.printNumber();

    return 0;
}