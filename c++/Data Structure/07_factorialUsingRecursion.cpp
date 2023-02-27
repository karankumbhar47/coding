#include<iostream>

using  namespace std;

int factorial(int n){
    if (n<2 && n>-1){
        return 1;
    }
    else if(n > -1){
        return factorial(n-1)*n;
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}