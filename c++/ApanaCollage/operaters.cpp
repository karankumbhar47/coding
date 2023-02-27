/* and operator --> &&
    or operator --> ||
    not operator--> !
    0 stands for false and 1 stands for True`
    Bitwise operater
    &(and) , |(or) , ^(xor) , ~(not) , << n (shift lift by n) , >> (shift right by n)
    a<<n --> a*2^n
    a>>n --> a/2^n
    assinment operater:
    a+=b --> a= a+b
    a-=b --> a= a-b
    a*=b --> a= a*b
    a/=b --> a= a/b

    Michallaneous Opetaers :-
    sizeof()
    condition ? x : y --> if else
    cast --> convert data type
    comma
    & --> address --> this will take variable and give address of that variable
    * --> pointer --> this will take address and give value at that address
    */

#include <iostream>

using namespace std;

int main()
{
    int a = 9;
    // cout << (4 && 0) << "\n";
    // cout << (4 && 1) << endl;
    cout << sizeof(100 ) << endl;
    // cout << (a < 5 ? "True" : "false") << endl;
    // int b = 5;
    // int *c = &b;
    // int **d = &c;
    // long l = 47676;
    // cout << "value at c before inreament is :" << *c << endl;
    // cout << "value at d  is :" << *d << endl;
    // cout << "value of d  is :" << d << endl;
    // // c++;
    // // c+=1000;
    // cout << "value of c is :" << c << endl;
    // cout << "value at c after inreament is :" << *c << endl;
    // cout << "value of b is :" << b << endl;
    // cout << "value of l is :" << &l << endl;
    return 0;
}