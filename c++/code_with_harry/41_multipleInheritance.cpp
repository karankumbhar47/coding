#include<iostream>

using  namespace std;


/*
multiple inheritance :- a,b -->c
multilevel and muliple inhertance are different
class  derived : visibility-mode base1, visibility-mode base2{
    class body
}
*/

class base1{
    protected:
        int base1int;
    public:
        void setBase1Int(int a){
            base1int=a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void setBase2Int(int a){
            base2int=a;
        }
};

class base3{
    protected:
        int base3int;
    public:
        void setBase3Int(int a){
            base3int=a;
        }
};

class derived : public base1, public base2,public base3{
    public:
    void show(){
    cout<<"The value of base 1 is "<<base1int<<endl;
    cout<<"The value of base 2 is "<<base2int<<endl;
    cout<<"The value of base 3 is "<<base3int<<endl;
    cout<<"The sum of all is "<<(base1int+base2int+base3int)<<endl;
}
};
int main()
{
    derived harry;
    harry.setBase1Int(3);
    harry.setBase2Int(6);
    harry.setBase3Int(9);
    harry.show();
    return 0;
}