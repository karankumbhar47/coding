#include<iostream>

using  namespace std;

//this function takes O(2^n) time complexity
int fib(int n){
    if (n<=1) return n;
    // cout<<n<<'n'<<endl;
    return fib(n-2)+fib(n-1);
}

//to avoid excessive recursion we can store values in array globally
int arr[20] ;
int fibArray(int n){
    if (n<=1){
        arr[n]=n;
        return n;
    }
    else{
        if (arr[n-1]==-1) arr[n-1] = fibArray(n-1); 
        if (arr[n-2]==-1) arr[n-2] = fibArray(n-2);
        return fibArray(n-1)+fibArray(n-2);
    }
}

//this function takes O(n) time complexity
int fibLoop(int n){
    int tn=0,t0=0,t1=1;
    if(n<=1) return n;
    for(int i =2; i<=n; i++){
        tn = t0 + t1;
        t0 = t1;
        t1 = tn;
    }
    return tn;
}

int main()
{   
    for (int  i = 0; i < 20; i++) arr[i]=(-1);
    
    int n=44;
    // cout<<fibArray(2);
    for(int i=0; i<n; i++){
        cout<<fibArray(i)<<endl;
    } 
    return 0;
}