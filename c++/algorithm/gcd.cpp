#include<iostream>

using  namespace std;

int gcd(int a, int b){
    int m = min(a,b);
    int M = max(a,b);
    a = m;
    b = M;
    while (a!=0)    
    {
        int rem = b%a;
        b = a;
        a = rem; 
    }
    return b; 
}


int main()
{
    cout<<gcd(8,23)<<endl; 
    return 0;
}