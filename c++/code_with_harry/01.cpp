#include<iostream>
// this is comment
/* this is multiple line 
comment*/
int glo=6;//--> global varible defined outside function
void sum(){
    int a=glo;
}
using namespace std;
int main(){
    int a=2,c=9;
    int b=5;
    glo=9; //--> preference will be given to local variable
    bool k= false;//--> corresponds to trure '1' will be print
    cout<<glo<< k<<'\n';
    char d='a'; //--> char in single quotes and string in double quotes
    cout<<"Hello World! "<< a <<"\nThe value of b is"<<b<<'\n'<<c;
    return 0;
}