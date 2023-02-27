#include<iostream>

using  namespace std;

class complex {
    int a,b;
    public:
    //creating constructure
    complex (void);//constructure declaration
                   //automatically invoked
                   //it is not having return type 
                   //same should be same as class name
    void printNumber()
    {
        cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
    } 
};
complex ::complex (void){//--> this is a default constructure
    a=10;               // this will take no parameter
    b=0;
    cout<<"initilizing..."<<endl;
}


int main()
{
    complex c1,c2,c3,c4;//-->this will intilize objects
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/*properties
1.this would be declared in public section
2.we cannot refer to their address
*/