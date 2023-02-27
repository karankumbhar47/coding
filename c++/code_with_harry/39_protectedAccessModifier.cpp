#include<iostream>

using  namespace std;

class base{
    protected://this will not published but inherted
        int a;
    private:
        int b;
};
/*
for protected member:
                        public mode     private mode    protected mode
1. private members      not inherited   not inherited   not inherited
2. protected members    protected       private         protected
3. public members       public          private         protected
*/

class derived : protected base{
    
};

int main()
{
    base b;
    derived d;
    //cout<<(b.a);//this will show error as -->member "base::a" (declared at line 7) is inaccessibl
    //as a is not a public member , a is protected member  
    return 0;
}