#include<iostream>

using  namespace std;

int sum(int a, int b){
    cout<<"2 argument"<<endl;
    return a+b;
}

int sum(int c, int a, int b){
    cout<<"3 argument"<<endl;
    return a+c+b;
}
// both hving same name but compiler itself finding regarding argument
//compiler match prototype first

// concegnating sting
char addChar(char a, char b){
    return a + b;
}

char addChar(char a, char b, char c){
    return  a + b + c;
}

int main()
{
    // int a=2,b=3,c=4;
    // cout<<"sum of 2 and 3 is :- "<<sum(a,b)<<endl;
    // cout<<"sum of 2, 3 and 4  is :- "<<sum(a,b,c)<<endl;
    // cin>>;
    char a[]="Karan ",b[]="Sunil ",c[]="Kumbhar ";
    cout<<"sum of a and b is :- "<<addChar(a,b)<<endl;
    cout<<"sum of a, b and c  is :- "<<addChar(a,b,c)<<endl;
    return 0;
}