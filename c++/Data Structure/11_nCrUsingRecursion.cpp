#include<iostream>
#include <string>

using  namespace std;

int nCr(int n,int r){
    if (n==r or r==0) return 1;
    else return nCr(n-1,r)+nCr(n-1,r-1);
}

int fact(int n){
    if( n==0 || n==1) return 1;
    else return n*fact(n-1);
}

int nCrUsingFactorial(int n,int r){ return fact (n)/(fact(n-r) * fact(r));}

void pascleTriangle(int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<string(n-i,' ');
        for (int j = 0; j <= i; j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    // cout<<nCrUsingFactorial(5,2);
    pascleTriangle(6);
    return 0;
}