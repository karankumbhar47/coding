#include <iostream>

using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int a)
    {
        id = a;
        salary = 1000;
    }
};

/*derived class
class {{derived-class name}}: {{visibility mode}}{{base class name}}
{
    class members/methods/etc...
}
note :-
1. default visibility mode is private mode
2. public visibility mode :- public of base class are public of derived class
3. private visibility mode :- public of base class are private of derived class
4. we can't access private members of base class
*/

class programmer : public Employee
{
public:
    int langugecode = 9;
    programmer(int idin)
    {
        id = idin; //--> to access id variable of employee class we need made it public
    }              /* when programmer called --> constructure of programmer called -->
                  constructure of programmer will try to called constructure
                  employee class(so it is needed that default constructure(constructure with at least no input) should exit otherwise
                  the error will show like -->no default constructor exists for class "Employee")
             
                   */
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(3);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer sl(5);
    cout << sl.langugecode<<endl;
    cout << sl.id<<endl; // this will show error as it is public member of base class
    // but private member of derived class as per visibilit mode
    sl.getData();
    return 0;
}