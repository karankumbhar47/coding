#include <iostream>

using namespace std;

//forward declaration
class Complex;

class Calculater{
    public:
    int add(int a,int b){
        return (a+b) ;
    }
    int sumRealComplex(Complex , Complex );
        
};



class Complex
{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex o1,Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
    } 
};


int Calculater :: sumRealComplex(Complex o1, Complex o2){
        return ((o1.a)+(o2.a));// --> this will show error--> member "complex::a" (declared at line 7) is inaccessible
    }


int main()
{
   
    return 0;
}