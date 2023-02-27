#include<iostream>
#include<cmath>
using  namespace std;

void ved(int a, int b ){
    cout<<"GM";
}

int fib(int n){
    if (n==1){
        // cout<<"0 ";
        return 0;
    }
    else if(n==2){
        // cout<<"1 ";
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}

int main()
{
    int n,k,p,m,sum,a,b;
    cin>>n;
    // k=n;
    // m=log10(n)+1;
    // sum=0;
    // while(n>0){
    //     p=pow((n%10),m); 
    //     n=n/10;
    // }
    // if (sum==k){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }
    // ved(a,b);
    cout<<endl;
    cout<<"This is Nth term"<<fib(n);
    return 0;
}

