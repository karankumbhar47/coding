#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;//--> here s is by default private

private:
    // void chk_bin(void);// --> we can declare function inside private but we can't use this from outside 
                        //--> error:-function "binary::chk_bin" (declared at line 27) is inaccessible
                        // we can access it only in class
public:
    void read(void);//--> public calling this data from private by udsing this function 
    void chk_bin(void);
    void ones(void);
    void display(void);
    void greet(void);
};

void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0); //--> this will exit program that means if number is not correct it will not execute next instruction
        }
    }
    cout << "Correct binary format" << endl;
}

void binary::ones(void)
{
    chk_bin();//--> if we want that before ones _complement it should check for binary number 
    //--> we can take one function in another function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "One's complement of given number is :- ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

void binary::greet(void)
{
    cout << "good moring bro" << endl;
}

int main()
{
    // classes and object
    // c++ --> C with classes by stroustroup
    // class --> modification of structure
    // structure --> member are public
    //  --> no methods
    //--> structure are typedef
    // classes --> structure +more
    //         --> members are public and private
    //  -->have methods
    binary b;
    b.read();
    b.greet();
    cout << "privious" << endl;
    b.chk_bin();
    cout << "After" << endl;
    b.ones();
    b.display();
    cout << endl<<"thinking properly" << endl;
    return 0;
}