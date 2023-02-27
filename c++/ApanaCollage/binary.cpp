#include<iostream>
#include<cmath>
#include<string>
using  namespace std;

int bin(int n){
    int r;
    if(n>1){
    r=n%2;
    // n=n/2;
    // cout<<r<<n<<endl;
    bin(n/2);
    cout<<r;
    }
    else{
        // cout<<n;
        cout<<n;
    }
}

int dec(int n){
    if (n>0){
    int ans, p;
    ans=0;
    p=((n%10)*pow(2,log10(n))) + dec(n/10);
    }
    else{
        return n;
    }
    
}

int addBin(int a, int b){
    
}
int main()
{
    int n;
    cin>>n;
    // string r;
    cout<<dec(n);
    return 0;
}