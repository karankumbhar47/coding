#include <iostream>

using namespace std;

class complex
{
    int a, b;
    // friend complex sumComplex(complex o1, complex o2);//--> this will give access to sumcomplex  to access it's private data 

public:
    // int a, b;--> if this are public variable we can access them without friend function      
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumComplex(complex o1, complex o2);//--> this will give access to sumcomplex  to access it's private data 

    void printNumber()
    {
        cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a) , (o2.b + o2.b));
    return o3;
}
int main()
{
    complex sum,c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();
    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}
/*Friend function 
1. not a part of class
2. can't called by class name like class.functionName
3. object not needed
4.usualy containts argument as object because it is accessing class private data
5.permission from class can declared in public or private both are valid
6.we can't access varible name inside class directly .We call them 
 like objectName.varibleName
*/